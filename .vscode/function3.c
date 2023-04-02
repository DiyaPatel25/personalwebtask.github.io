#include<stdio.h>
//int sum(int a,int b);
void printTable(int n);

int main()
{
    int n;
    printf("Enter numbers :");
    scanf("%d",&n);
    printTable(n); //argument/actual parameter
    return 0;
    
}
// int  sum(int a,int b)
// {
//     return a+b;
    
// }
void printTable(int n)//parameter/formal parameter
{
    for(int i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,i*n);
    }
}