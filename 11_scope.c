#include <stdio.h>
#include <stdlib.h>

/// global variables
int h = 50;
int g;

void NumberPrint()
{
    /// Examples of local variables
    int x;
    int a = 30;
    x = a + h;
    printf("The value of x is %d", x);
}

int main11()
{
    ///local variable
    int f;
    int a = 10;
    ///Note that h is a global variable.
    f = a + h;
    printf("The number is %d", f);
}
