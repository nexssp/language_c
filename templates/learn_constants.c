

//Source: https://www.programiz.com/c-programming/c-variables-constants
#include <stdio.h>

int main()
{
///Variables in C
//Variable is a container (storage area) to hold data.
//To indicate the storage area, each variable should be given a unique name (identifier).
//Variable names are just the symbolic representation of a memory location.

//For example:
int myage = 88;
printf("Variable myage is: %i \n", myage);
//myage is a variable of int type. Here, the variable is assigned an integer value 88.

//The value of a variable can be changed:
char z = 'a';
z = 'l';
printf("Character variable 'z' is: %c \n", z);

//C and C++ are a strongly typed language. This means that the variable type cannot be changed once it is declared.
//For example:
int number = 5;      // integer variable
//number = 5.5;        // standard conversion occurs from double (5.5) to int (5), because type is int, it compiles with warning(when using some compilers)
printf("Number is: %i \n", number);
//double number;       // error conflicting types

///Literals
//Literals are data used for representing fixed values. They can be used directly in the code.
//For example: above numbers 5 and 5.5 are literals

// String Literals
//A string literal is a sequence of characters enclosed in double-quote marks. For example:
//
//"good"                  //string constant
//""                      //null string constant
//"      "                //string constant of six white space
//"x"                     //string constant having a single character.
//"Earth is round\n"      //prints string with a newline



///Constants
//If you want to define a variable whose value cannot be changed, you can use the const keyword.
// This will create a constant. For example,

const float pi = 3.1415;
printf("Number is: %f \n", pi);
//Notice: Added keyword const.
//Here, pi is a symbolic constant; its value cannot be changed.

//pi = 2.9; //Error:  assignment of read-only variable 'pi'

}


