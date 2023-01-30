#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    if ((a-b)>0)
    printf("The value of a is greater than the value of b");

    else if ((a-b)<0)
    printf("The value of a is less than the value of b");

    else (a=b);
    printf("Please Enter different value of a and b");
    
    
    return 0;
}
