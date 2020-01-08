#include <stdlib.h>
#include "cJSON.h"
#include <stdio.h>

// This needs to be implemented for C language.
// Basically it needs to read JSON and pass JSON out with the possibility of modify the values
// in the JSON.

// To test (make sure you are not in any folder of nexss programmer):
// 1) nexss file add myfile.c
// 2) nexss myfile.c -> this should give kind of output (below C++):
// {"start":1578507572953,"cwd":"C:\\xdata\\1\\1234","debug":true,"_":[],"outputCPP":"Hello from C++ 17!"}
// 3) More characters to test nexss myfile.c --test and output will be with a lot of unicode characters:
// {"start":1578508348465,"cwd":"C:\\xdata\\1\\1234","debug":true,"_":[],"test":true,"number":369369,"string":"This is string","Unicode":"½¼¾¿®¢£¤¥§óęśćźżÓŚĆŹŻäöüß€яшдфгчйкльжѠ","transformWorks":"ąęćśŻó","outputCPP":"Hello from C++ 17!"}
// Then copy the myfile.c to the c:\\Users\\[yourusername]\\.nexss\\languages\\C\\templates\\
// 1) default - has just extra test value
// 2) hellowWorld contains extra: "HelloFromC":"C Version here".

// Below only copying the data, without able to modify or read data from the input

// Errors - The Nexss PROGRAMMER allow to provide solutions to errors.
// file: c:\\Users\\[yourusername]\\.nexss\\languages\\C\\nexss.c.errors.js
// EG:
// module.exports = {
// "'(.*?)' is not recognized as an internal or external command" : "nexss install c <module>"
// }
// <module> will be replaced what is found in the (.*?) see above. (.*?) is the regular expression

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    // cJSON *json = cJSON_Parse(string);
    // char *string = cJSON_Print(json);

    return 0;
}