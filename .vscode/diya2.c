//WRITE A PROGRAM TO FIND AN AREA OF A RECTANGLE//


#include<stdio.h>
int main()
{
    float a,b,h,area;
    printf("Enter the value of length:\n",a);
    scanf("%f",&a);
    printf("Enter the value of width:\n",b);
    scanf("%f",&b);
    printf("Enter the value of height:\n",h);
    scanf("%f",&h);

    area=a*b*h;
    printf("Area of a RECTANGLE is:%f\n",area);
    return 0;
}
