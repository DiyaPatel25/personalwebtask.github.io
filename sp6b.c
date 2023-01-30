#include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    char ch;

    printf("Enter the value of num1:\n");
    scanf("%d", &num1);

    printf("Enter the value of num2:\n");
    scanf("%f", &num2);

    printf("\n Choose operators from(+,-,*,/,%):");
    scanf("%c", &ch);
result=0;
    switch(ch)
    {
        case '+':
            result=(num1+num2);
            break;

            default:
            printf(" Please enter correct option\n");
    }

printf(" Result : %d %c %d=%f \n", num1,ch,num2,result);
    
    return 0;
}
