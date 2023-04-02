#include<stdio.h>

int sumN(int n);
int factN(int n);

int main()
{
    printf("Sum is:%d\n",sumN(7));
    printf("factorial is =%d\n",factN(5));
    return 0;
}

int sumN(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumN1=sumN(n-1);
    int sumN=sumN1+n;
    
    return sumN;
}
int factN(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factN1=factN(n-1);
    int factN=factN1*n;
    return factN;
}
