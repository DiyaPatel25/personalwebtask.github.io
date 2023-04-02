//FIND OUT DISTANCE TRAVELLED BY THE EQUATION d=ut+1/2(at^2)//

#include<stdio.h>
int main()
{
    int t;
    float d,a,u;

    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of t:");
    scanf("%d",&t);
    printf("Enter the value of u:");
    scanf("%f",&u);

    d=(u*t)+(0.5*(a*t*t));
    printf("The distance d is : %f",d);

    
    return 0;
}
