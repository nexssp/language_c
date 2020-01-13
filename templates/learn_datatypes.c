//Source:https://www.programiz.com/c-programming/c-data-types
#include <stdio.h>
#include <stdbool.h> // needed to use boolean variables

int main()
{
//C Data Types
//In C programming, data types are declarations for variables.
// This determines the type and size of data associated with variables.

//For example,
int var;
//Here, var is a variable of int (integer) type.

///Fundamental types:
//often used types in C:

//int
//char
//float
//double
//short int
//unsigned int
//long int
//long long
//unsigned long int
//unsigned long long int
//signed char
//unsigned char
//long double
//int
//float

float salary;
double price;
char test = 'h';
long foo;
long long foo1;
long double foo2;

//signed and unsigned
//In C, signed and unsigned are type modifiers. You can alter the data storage of a data type by using them.
//For example,
unsigned int x;
int y;
//Here, the variable x can hold only zero and positive values because we have used the unsigned modifier.

//Other data types defined in C programming are:

//bool Type //for boolean types variables(contains 0 or 1)
bool b =  0;

//Enumerated types
enum daysoftheweek {mon,tue,wed,thu,fri,sat,sun}; //new type 'daysofthe week' has been defined
enum daysoftheweek day = mon; // you can only assign one of the 7 values defined above

///Derived Data Types
//Data types that are derived from fundamental data types are derived types.
//For example: arrays

//An array is a variable that can store multiple values of the same type.
//For example, if you want to store 100 integers, you can create an array for it.
//Example of definition and initialization of the array:
int integergnumbers[5] = {1,2,3,4,5};
//Here, we declared and defined an array, integergnumbers, of integer type. And its size is 5.
// Meaning, it can hold 5 integer values.

//Same as C++ it's important to note that the size and type of an array cannot be changed once it is declared.
//You can access elements of an array by indices.

printf("%i",integergnumbers[4]); // this is the last element of the array!!(we counting in C/C++ starting from 0)

//Warning:
//  printf("%i",integergnumbers[5]);
//  element integergnumbers[5] doesn't exist, compiler doesn't check it(will not show error!)
//  this can leads to serious problems which is difficult to find
//  especially if we use assignment operator =, like that for example:
//  integergnumbers[5] = 123; //horror!

}
