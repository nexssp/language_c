//Source: https://www.programiz.com/c-programming/c-for-loop
#include <stdio.h>
int main()
{

///for Loop

//The syntax of the for loop is:
//for (initializationStatement; testExpression; updateStatement)
//{
    // statements inside the body of loop
//}

//How for loop works?
//The initialization statement is executed only once.
//Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
//However, if the test expression is evaluated to true, statements inside the body of for loop are executed,
//and the update expression is updated.
//Again the test expression is evaluated.
//This process goes on until the test expression is false. When the test expression is false, the loop terminates.
//For example:
for (int i = 0; i < 10; ++i)
  {
    printf("%d ", i);
    printf ("\n");
  }
  printf ("\n");


///while loop
//The syntax:

//while (Expression)
//    {
//        // statements inside the body of the loop
//    }

//The while loop evaluates the test expression inside the parenthesis ().
//If the test expression is true, statements inside the body of while loop are executed.
//Then, the test expression is evaluated again.
//The process goes on until the test expression is evaluated to false.
//If the test expression is false, the loop terminates (ends).
//For example:
int i = 0;
while (i < 10)
    {
        printf("%d\n", i);
        ++i;
    }

}


