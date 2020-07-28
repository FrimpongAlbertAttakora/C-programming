#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumberArray [6] = {10, 20, 30,40,50,60};
    char charArray[4] = {'a','b','c','d'};

    int accessArray = MyNumberArray[1];
    printf("value = %d \n", accessArray);

    ///change the value of an array
    MyNumberArray[2] = 45;
    printf("numberChanges = %d \n", MyNumberArray[2]);

    ///print members of the array
    for(int i=0;i<6;i++)
    {
        printf("element[%d]=%d \n",i,MyNumberArray[i]);
    }


}

