//CALCULATOR//

#include <stdio.h>
int main()
{
    int a, b, addition, substraction, multiplication,square;
    float devide, modules;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Addition of a and b is:%d\n", addition = a + b);

    printf("Substraction of a and b is:%d\n", substraction = a - b);

    printf("Multiplication of a and b is:%d\n", multiplication = a * b);

    printf("Devide of a and b is:%f\n", devide = a / (float)b);

    printf("Modules of a and b is:%f\n", modules = a % b);

    printf("square of a:%d\n",square=a*a);

    return 0;
}
