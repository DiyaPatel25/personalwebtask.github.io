//w.a.f to calculate the sum,multiplication,average of 
//2 numbers .Print that average in main function
#include<stdio.h>

void doWork(int a,int b,int *sum,int *mult,int *avg);

int main()
{
    int a=3,b=5;
    int sum,mult,avg;
    doWork(a,b,&sum,&mult,&avg);
    printf("sum=%d\n,mult=%d\n,avg=%d\n",sum,mult,avg);
    return 0;
}

void doWork(int a,int b,int *sum,int *mult,int *avg)
{
    *sum=a+b;
    *mult=a*b;
    *avg=(a+b)/2;
}