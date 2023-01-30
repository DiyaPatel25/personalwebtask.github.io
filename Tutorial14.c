#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the number\n:");
    scanf("%d", &num);

    while(i<=10)
    {
        
        printf("%d x i = %d\n", num, num*i);
        i=i+1;
    }

    
    return 0;
}
