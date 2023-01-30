#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("the age is 3\n");
       break;

    case 13:
        printf("the age is 13\n");
    break;
    
    default:
        printf("Your age is not 3 and 13\n");
        break;
    }
    return 0;
}
