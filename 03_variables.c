#include <stdio.h>
#include <stdlib.h>

int main3()
{
    int age;
    age = 21;
    printf("The age is %d \n", age);
    // name of a variable
    // must not begin with a digit (eg. 2foo)
    // spaces not allowed in names (eg. my foo)
    // only letters, digits and _ is allowed (eg. $foo)
    // language key words cannot be used as names (eg. while, for ect)
    float pi = 3.14;
    char my_char = 'a';
    double big_pi = 3.1422323232;
    printf("The age is %f \n", pi);
    printf("The age is %c \n", big_pi);

    return 0;
}
