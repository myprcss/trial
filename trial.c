#include <stdio.h>
#include <stdlib.h>

/*VALLE, PRECIOUS KARYL Q. DIT 1-2*/

int main()
{
 
   printf("Declaring Variables\n");
    printf("\n");
    int age = 20;
    float height = 147.32;
    double weight = 43.3242234543;
    char gender = 'F';

    printf("Age: %d\n", age);
    printf("Height: %.2fcm \n", height);
    printf("Weight: %.10lf\n", weight);
    printf("Gender: %c\n", gender);
    printf("\n");

//Perform arithmetic operators; addition, subtraction, multiplication, and division

    printf("Arithmetic operators; +,-,*,/\n");
    int x = 95, y = 8;
        printf("x = 95\n");
        printf("y = 8\n");
    printf("\n");
    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    int division = x / y;

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);

    printf("\n");

// Perform logical operators; AND, OR, and NOT

    printf("Logical operators (The value 1 means true and the value 0 means false)\n");
    //using the same value
        printf("x = 95\n");
        printf("y = 8\n");

    printf("\n");

    if(x>y&&y!=x){ //AND (&&) operator returns 1 when both statement is true
         printf("AND(x>y&&y!=x):%d\n", x&&y);
    if(x>=y||x>y)  //OR (||) operator returns 1 when atleast 1 statement is true
         printf("OR(x>=y||x>y):%d\n", x||y);
    if(!x<y)      //NOT (!) operator reverse the result
        printf("NOT(!x>y): %d\n",!x);
    }
    printf("\n");

// Perform update variables using assignment operator

        printf("Assignment operators");
    printf("\n");
    //using the same value
        printf("x = 95\n");
        printf("y = 8\n");
    printf("\n");
    x += 2;
    y *= 21;
    printf("Sum of x+=2: %d\n",x);
    printf("Product of y*= 21: %d\n", y);
    printf("\n");

// Using Loops
    printf("Using while loop to print numbers from 1 to 10\n");
    int a = 1;
    while (a <= 10){
        printf(" %d ", a);
     a++;}
    printf("\n");
    printf("\n");
    printf("Using for loop to print even numbers from 2 to 20\n");
    int b;
    for(b = 2; b <= 20; b +=2){
        printf(" %d ", b);
    }
    printf("\n");
    printf("\n");
    printf("Using do-loop to print numbers from 1 to 5\n");
    int c = 1;
    do{
        printf(" %d ", c);
        c++;
    }
    while (c<=5);
    printf("\n");
    printf("\n");

// Using if-else statement
    printf("Using if-else condition to check whether the given number is even or odd.\n");
    printf("\n");
    int givenNumber = 85;
    if(givenNumber %2 ==0) {
        printf("The number %d is even.", givenNumber);
    }else{
        printf("The number %d is odd.", givenNumber);
    }
    printf("\n");
    printf("\n");

    return 0;
} 
