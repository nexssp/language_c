// https://gist.github.com/migf1/5559176
#include <stdio.h>  /* getchar() */
#include <stdlib.h> /* malloc(), realloc() */
#include <string.h> /* memcpy() */

/* -----------------------------------------------
 * Create a new string (NUL-terminated array of chars) by reading the stdin.
 * Return the newly created string, or NULL on error.
 * Args:
 *	int beExact:	If 0 (false), then the size of the created string will
 *			be an exact multiple of the internally used alloc-ahead
 *			buffer. Most often it will be larger than: 1 + strlen()
 *
 *			If 1 (true), then the size of the created string will
 *			be exactly: 1 + strlen()
 *	size_t *len:	If non-NULL, then it passes to the caller the length of
 *			the created string.
 *
 *	size_t *size:	If non-NULL, then it passes to the caller the size of
 *			the created string.
 * Notes:
 * 	- The returned string does NOT include any '\n' from stdin.
 *	- The returned string should be explicitly freed after working with it.
 *
 * Sample Usage:
 *	char *s_new_from_stdin(int beExact, size_t *len, size_t *size);
 *	int main( void )
 *	{
 *		int beExact = 0;	// false
 *		size_t len=0, size=0;
 *		char *s = s_new_from_stdin(beExact, &len, &size);
 *
 *		if ( !s )
 *			puts( "<NULL>" );
 *		else {
 *			puts( s );
 *			printf( "len: %zu, size: %zu\n", len, size );
 *			free(s);	// don't forget!
 *		}
 *		return 0;
 *	}
 */
char *s_new_from_stdin(int beExact, size_t *len, size_t *size)
{
    const int AHEAD = 2; /* # of bytes for alloc-ahead buffer */
    int i, j, c = EOF;
    size_t sz = 0;

    char *
    try
        = NULL;
    char *ret = NULL;

    /* create alloc-ahead buffer */
    ret = malloc(AHEAD * sizeof(char));
    if (NULL == ret)
        goto fail; /* legitimate use of goto */

    /* read stdin into ret until '\n' or EOF */
    j = 1;
    for (i = 0; '\n' != (c = getchar()) && EOF != c; i++)
    {
        /* need another alloc-ahead buffer? */
        if (i == (j * AHEAD) - 1) /* -1 is for the terminating '\0' */
        {
            try
                = realloc(ret, (++j) * AHEAD);
            if (NULL == try)
            {
                free(ret);
                goto fail; /* legitimate use of goto */
            }
            ret =
            try
                ;
        }
        ret[i] = (char)c;
    }
    ret[i] = '\0'; /* nul-terminate ret */

    /* remember size of ret as if beExact == FALSE */
    sz = (j * AHEAD);

    /* if beExact == TRUE, free unsued mem and update remembered size */
    if (beExact)
    {
        /* realloc ret to exactly 1 + strlen(ret) chars */
        try
            = realloc(ret, (i + 1) * sizeof(char));
        if (NULL == try)
            goto fail; /* legitimate use of goto */
        ret =
        try
            ;

        /* update remembered size to exactly 1 + strlen(ret) */
        sz = i + 1;
    }

    /* pass len and size to the caller */
    if (len)
        *len = i;
    if (size)
        *size = sz;

    return ret;

fail:
    if (len)
        *len = 0;
    if (size)
        *size = 0;
    return NULL;
}

/* -----------------------------------------------
 * Two simple wrapper functions isolating the beExact behaviors of the normal
 * function, having the additional (dis)advantage of not returning the length
 * and the size of the created string.
 *
 * They can also be implemented as macros (if for example inlining is of greater
 * importance).
 */
char *s_get_ahead(void)
{
    return s_new_from_stdin(0, NULL, NULL);
}
char *s_get_exact(void)
{
    return s_new_from_stdin(1, NULL, NULL);
}