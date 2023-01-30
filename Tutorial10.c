#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf( "You entered your age %d as your age\n", age);
    if ( age>=18)
    {
        printf(" You can vote!\n");

    }
    else if (age>10)
    {
        printf("You can vote for kids");
    }
    else
    {
    
        printf(" You are bachha bete\n");
    }

    return 0;
}
