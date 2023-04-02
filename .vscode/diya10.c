//Find out maximum number in three numbers//

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(b>c)
        {
            printf("Maximum number is:%d",a);
        }
        else
        {
            printf("Maximum number is:%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Maximum number is:%d",b);
        }
        else
        {
            printf("Maximum number is:%d",c);
        }
    }
    
    return 0;
}
