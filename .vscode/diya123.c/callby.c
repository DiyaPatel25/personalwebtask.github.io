#include<stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number=5;
    square(number);
    printf("Number is= %d\n",number);
    _square(&number);
    printf("number is %d\n",number);
    
    return 0;
}

void square(int n) //call by value 
{
    n=n*n;
    printf("square is :%d\n",n);
}

void _square(int *n) //call by reference
{
    *n= (*n)*(*n);
    printf("Square is =%d\n",*n);
}