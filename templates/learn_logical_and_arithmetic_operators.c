//Source: https://www.programiz.com/c-programming/c-operators

#include <stdio.h>
int main()
{
// C Programming Operators

//C Arithmetic Operators
//An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc

//Operator	Meaning of Operator
//   +	addition
//   -	subtraction
//   *	multiplication
//   /	division
//   %	remainder after division (modulo)

//Example :
int a = 9,b = 4, c;

c = a + b;
printf("a + b = %d \n",c);
c = a - b;
printf("a - b = %d \n",c);
c = a * b;
printf("a * b = %d \n",c);
c = a/b;
printf("a / b = %d \n",c);
c = a % b;
printf("Remainder when a divided by b = %d \n",c);
//The modulo operator % computes the remainder. When a=9 is divided by b=4, the remainder is 1.
// The % operator can only be used with integers.

//C Increment and Decrement Operators
//C programming has two operators increment ++ and decrement -- to change the value of an operand  by 1.

int a1 = 10, b1 = 100;
float c1 = 10.5, d1 = 100.5;
printf("++a = %d \n", ++a1);
printf("--b = %d \n", --b1);
printf("++c = %f \n", ++c1);
printf("--d = %f \n", --d1);


// Relational Operators
//Checks the relationship between two operands.
//If the relation is true, it returns 1; if the relation is false, it returns  0.
//Relational operators in C are:

//  ==	Equal to
//  >	Greater than
//  <	Less than
//  !=	Not equal to
//  >=	Greater than or equal to
//  <=	Less than or equal to


///Logical Operators
//An expression containing logical operator returns either 0 or 1.
//Logical operators are commonly used in decision making in C programming.

//  &&	Logical AND
//  ||	Logical OR
//  !	Logical NOT


int a2 = 5, b2 = 5, c2 = 10, result;

result = ((a2 == b2) && (c2 > b2));
printf("(a2 == b2) && (c2 > b2) is %d \n", result);

result = ((a2 == b2) || (c2 < b2));
printf("(a2 == b2) || (c2 < b2) is %d \n", result); // first condition is satisfied so result is true as well


//Logical NOT '!'
//Example:
int a3 = 0;
if(!a3)
    {
       printf("a3 contains: %i", a3);
    }
else
    {
       printf("a3 contains: %i", a3);
    }
}
