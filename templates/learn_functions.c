
//Source: https://www.programiz.com/c-programming/c-functions
#include <stdio.h>
void add() //definition of function 'add'
{
    int a = 2;
    a = a + 2;
  printf("Object \"a\" contains value of: %i",a);
}

int main()
{
///C Functions
//A function is a block of code that performs a specific task.
//Dividing a complex problem into smaller chunks makes our program easy to understand to reuse.

//Types of function
//There are two types of function in C programming:
//Standard library functions
//User-defined functions

//Standard library functions
//The standard library functions are built-in functions in C programming.
//These functions are defined in header files.
//For example:
//The printf() is a standard library function to send formatted output to the screen.
//This function is defined in the stdio.h header file.
printf("Hello World\n");
//Hence, to use the printf() function, we need to include the stdio.h header file using #include <stdio.h>.


//User-defined function
//You can also create functions as per your need. Such functions created by the user are known as user-defined functions.
//Syntax:
//void functionName()
//{
//    ... .. ...
//    ... .. ...
//}
//Example:

add();

//The execution of a C program begins from the main() function.
//When the compiler encounters add();, control of the program jumps to void add() definition
//And, the compiler starts executing the codes inside add().
}


