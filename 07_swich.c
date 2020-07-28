#include <stdio.h>
#include <stdlib.h>

int main7()
{
   int marks = 75;

   switch (marks)
    {
    case 95:
    case 90:
    case 85:
        printf("Excellent");
        break;
    case 75:
    case 70:
        printf("Very Good");
        break;
     case 60:
        printf(" Good");
        break;
     case 40:
        printf("Ok");
        break;
     default:
        printf("Grade unavailable");
    }
}
