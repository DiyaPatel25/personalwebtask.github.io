#include<stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter the value of a\n");
    printf("Enter the value of b\n");
    scanf("%d%f", &a, &b);

    printf("addition of a and b is %f\n", a+b);
    printf("substraction of a and b id %f\n", a-b);
    printf("multiplication of a and b is %f\n", a*b);
    printf("divide of a and b is %5.2f\n", a/b);

    
    
    return 0;
}
