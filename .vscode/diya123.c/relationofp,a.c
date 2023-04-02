#include<stdio.h>
int main()
{
    int arr[5]={13,67,90,23,45};
    int *ptr;
    ptr=&arr;
    int i;
    for(i=1;i<=5;i++)
    {
    printf("element %d is %d\n",i,*ptr);
    ptr++;
    }
    return 0;
}