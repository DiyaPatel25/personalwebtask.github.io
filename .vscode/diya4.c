//INTERCHANGE TWO NUMBERS//

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b:\n",a,b);
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After interchange the value of a and b is A=%d and B=%d",a,b);
    return 0;
}
