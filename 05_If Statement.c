#include <stdio.h>
#include <stdlib.h>

int main5()
{
    int age;
    printf("Please enter the age \n");
    scanf("%d", &age);
    if (age > 18) {
        printf("The age is greater than 18 \n");
        if(age < 21) {
            printf("Age is greater than 18 but less than 21");
        }
    }/**
    if (age == 18) {
        printf("The age is equal to 18");
    }
    if (age < 18) {
        printf("The age is less than 18");
    }**/
    else if (age == 18) {
        printf("The age is equal to 18");
    }
    else {
        printf("The age is not greater than 18");
    }
    return 0;
}
