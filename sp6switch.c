#include<stdio.h>
int main()
{
    int num1,num2,result;
    char ch;
    printf("Enter the value of num1\n:");
    scanf ("%d", &num1);

    printf("Enter the value of num2\n:");
    scanf("%d", &num2);

    printf("Choose operation to perform (+,-,*,/):");
    scanf("%c", &ch);
    

    switch(ch)
    {
        case'+':
        result=num1+num2;
        break;

        case'-':
        result=num1-num2;
        break;

        case'*':
        result=num1*num2;
        break;
    

        case'/':
        result=(float)num1/(float)num2;

        break;

    default:
    printf("Invalid operation.\n");

    

    }
    printf("Result: %d %c %d = %d\n", num1,ch,num2,result);
    
    return 0;
}
