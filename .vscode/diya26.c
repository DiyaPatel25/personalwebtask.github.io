// Write a program to evaluate the series 1^2+2^2+3^2+……+n^2//

#include <stdio.h>
int main()
{
    int i, num;
    float sum = 0;
    printf("Enter any number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + (1.0/i);
    }
    
    for ( i = 0; i < num; i++) //cod of practicle 25
    {
        sum=sum+(i*i);    
    }

    printf("Sum of series:%f\n", sum);
    printf("Sum of series:%f\n", sum);
    return 0;
}
