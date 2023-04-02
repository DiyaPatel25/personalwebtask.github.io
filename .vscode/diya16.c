// check the last digit number is even or odd//

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    if ((num % 10) % 2 == 0)
    {
        printf("Last digit of Enter number is even");
    }
    else
    {
        printf("last degit of Enter number is odd");
    }

    return 0;
}
