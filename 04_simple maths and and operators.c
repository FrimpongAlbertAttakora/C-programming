#include <stdio.h>
#include <stdlib.h>

int main4()
{
    /** Multiplicative and additive operators
        + (Addition),
        - (subtraction),
        * (multiplication),
        / (division),
        % (modulus)
    **/

    int a = 23 ,b = 4;
    int sum;
    int mult;
    float div;
    sum = a+b;
    mult = a*b;
    div = a/b;
    printf("Sum = %d \n" , sum);
    printf("Mult = %d \n", mult);
    printf("div = %f", div);
    return 0;
}
