#include<stdio.h>

int fib(int n);

int main()
{
    printf("%d",fib(10));
    
    return 0;
}

int fib(int n)
{
    
    
        if(n==0)
        {
            return 0;
        }

    
    if(n==1){
        return 1;
    }
    
    int fibn1=fib(n-1);
    int fibn2=fib(n-2);
    int fib=fibn1+fibn2;
   // printf("fib of %d is %d\n",n,fib);
    return fib;
}