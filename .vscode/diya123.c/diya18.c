//reverse a number//

#include<stdio.h>
int main()
{
    int num,rem,rev;
    printf("Enter any number which want to you reverse:");
    scanf("%d",&num);
    
    rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }

    printf("Reverse number is:%d",rev);
    return 0;
}
