#include <stdio.h>
#include <stdlib.h>

int main8()
{
    int i = 0;
    // do loop executes code ones before checking condition
    do
    {
        printf("Value of i= %d \n", i);
        i++;
    }while(i > 10);

    printf("************************\n");

    int j = 0;
    // while loop checks condition before code is executed
    while (j > 10)
    {
        printf("Value of j= %d \n", j);
        j++;
    }

}
