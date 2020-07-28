#include <stdio.h>
#include <stdlib.h>

void myFunction();
void Sum();
void addfun();
void prodfun();
Product();


int main()
{
    //myFunction();

    // Sum the two numbers
    //Sum(2000,1012);

    // Add two input numbers
    // addfun();

    // multiply two numbers
    printf("result = %d \n", Product(10,50));

    // Multiply two input numbers that returns the answer
    prodfun();
}


void myFunction()
{
    printf("sum = %d \n",10+52);
    printf("We are inside a function \n");
}

void Sum(int a, int b)
{
    int sum = a+b;
    printf("sum = %d \n", sum);
}

void addfun()
{
     // Program function to sum the input of x and y values.
    int x,y;
    printf("Please enter two numbers \n");
    printf("first number : \n");
    scanf("%d", &x);
    printf("second number : \n");
    scanf("%d", &y);
    Sum(x, y);
}

int Product(int a, int b)
{
    return (a*b);
}

void prodfun()
{
    // Program function to sum the input of x and y values.
    int x,y;
    printf("Please enter two numbers \n");
    printf("first number : \n");
    scanf("%d", &x);
    printf("second number : \n");
    scanf("%d", &y);

    int prod;
    prod = Product(x,y);

    printf("Product = %d", prod);
}
