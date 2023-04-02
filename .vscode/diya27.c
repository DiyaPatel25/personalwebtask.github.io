// Write a C program to find 1+1/2!+1/3!+1/4!+…..+1/n!

#include <stdio.h>
int main()
{
    int i, num, fact = 1;
    float sum = 0;

    printf("Enter number:");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        fact=fact*i;
        sum=sum+(1.0/fact);
    }
    printf("%f",sum);
    return 0;
}
    