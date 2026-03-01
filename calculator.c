/*
===============================================================================
                ADVANCED SCIENTIFIC CALCULATOR VERSION 2.0
-------------------------------------------------------------------------------
Author  : Shaswat Srivastav
Language: C
Created : 2026

Description:
A console-based advanced calculator capable of performing basic and
scientific mathematical operations.

Features:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Factorial
9. Absolute Value
10. Logarithm
11. Exit

Concepts Used:
- Functions
- Switch Case
- Loops
- math.h Library
- Modular Programming
- User Input/Output

Compilation:
gcc calculator.c -o calculator -lm

Usage:
Run the program and select operation from menu.

Future Improvements:
- GUI version
- Expression solving (5+3*2)
- History feature
===============================================================================
*/

#include<stdio.h>
#include<math.h>

// function declaration

void add();
void subtract();
void multiply();
void divide();
void modulus();
void power();
void square_root();

int main()
{
    int choice;

    while(1)
    {
        printf("\n=== ADVANCED CALCULATOR ===\n");

        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: add(); break;

            case 2: subtract(); break;

            case 3: multiply(); break;

            case 4: divide(); break;

            case 5: modulus(); break;

            case 6: power(); break;

            case 7: square_root(); break;

            case 8:
                printf("Exiting Calculator...\n");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}


// ADD

void add()
{
    float a,b;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number: ");
    scanf("%f",&b);

    printf("Result = %.2f\n",a+b);
}


// SUBTRACT

void subtract()
{
    float a,b;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number: ");
    scanf("%f",&b);

    printf("Result = %.2f\n",a-b);
}


// MULTIPLY

void multiply()
{
    float a,b;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number: ");
    scanf("%f",&b);

    printf("Result = %.2f\n",a*b);
}


// DIVIDE

void divide()
{
    float a,b;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number: ");
    scanf("%f",&b);

    if(b==0)
        printf("Division by zero not possible\n");

    else
        printf("Result = %.2f\n",a/b);
}


// MODULUS

void modulus()
{
    int a,b;

    printf("Enter First Number: ");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);

    if(b==0)
        printf("Modulus by zero not possible\n");

    else
        printf("Result = %d\n",a%b);
}


// POWER

void power()
{
    float base,exp;

    printf("Enter Base: ");
    scanf("%f",&base);

    printf("Enter Exponent: ");
    scanf("%f",&exp);

    printf("Result = %.2f\n",pow(base,exp));
}


// SQUARE ROOT

void square_root()
{
    float num;

    printf("Enter Number: ");
    scanf("%f",&num);

    if(num<0)
        printf("Square root of negative not possible\n");

    else
        printf("Result = %.2f\n",sqrt(num));
}
