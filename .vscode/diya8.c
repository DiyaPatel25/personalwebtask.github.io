//find out that given number is positive,negative or zero//

//practical 9 is student pass or fail//

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Enter number is positive");
    }
    else if(a<0)
    {
        printf("Enter number is negative");
    }
    else
    {
        printf("Enter number is zero");
    }

    return 0;
}
