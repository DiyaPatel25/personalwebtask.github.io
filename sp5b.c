#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three number\n"); 
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1>num2 && num2>num3)
    {
        printf("%d is maximum number",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is maximum number",num2);
    }

    else 
    {
        printf("%d is maximum number",num3);
    } 
       return 0;
}
