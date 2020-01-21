
//Source: https://www.programiz.com/c-programming/c-if-else-statement
#include <stdio.h>
int main()
{
///C if else conditions
//The syntax:

//if ( expression)
//{
//   // statements to be executed if the test expression is true
//}


//The if statement evaluates the test expression inside the parenthesis ().
//If the test expression is evaluated to true, statements inside the body of if are executed.
//If the test expression is evaluated to false, statements inside the body of if are not executed.
//How if statement works in C programming?

//For example:
int number = 0;
    printf("Enter a number(integer): ");
    scanf_s("%d", &number);
    // true if number is less than 0
    if (number < 0)
        {
            printf("You entered %d and that's less than 0\n", number);
        }
    else
        {
            printf("You entered %d and that's more than 0\n", number);
        }

}


