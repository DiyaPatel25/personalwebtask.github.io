#include <stdio.h>
#include <math.h>

// int main()
// {
//     int n=4;
//     printf("%f",pow(n,2));
//     return 0;
// }

void calculateSquare(int l1);
void calculateCircle(int r);
void calculateRectangle(int l2,int b);

int main()
{
    int l1, r,l2, b;
    // float area;

    printf("length of square:\n");
    scanf("%d\n", &l1);
    calculateSquare(l1);
    printf("Enter radius for circle:\n");
    scanf("%d\n", &r);
    calculateCircle(r);
    printf("length of rectangle:\n");
    scanf("%d",&l2);
    printf("width of rectangle:\n");
    scanf("%d",&b);
    calculateRectangle( l2, b);
    
}

void calculateSquare(int l1)
{
    printf("Area of square is :%f\n", pow(l1, 2));
}
void calculateCircle(int r)
{
    printf("Are of circle is :%f\n", ( (3.14) * (pow(r, 2))));
}
void calculateRectangle(int l2,int b)
{
    printf("Area of rectangle is :%d\n",(l2*b));
}