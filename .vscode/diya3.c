// CALCULATE SIMPLE INTEREST//

#include <stdio.h>
int main()
{
    int  n;
    float p,r, i;

    printf("Enter the princliple amount is :",p);
    scanf("%f", &p);
    printf("Enter the number of years:", n);
    scanf("%d", &n);
    printf("Enter the rate of interest:", r);
    scanf("%f", &r);

    i = (p * r * n) / 100;

    printf("Interest is=%0.2f\n", i);
    printf("Interest is=%4.2f\n", i);
    printf("Interest is=%10.2f\n", i);
    printf("Interest is=%-10.2f\n", i);
    return 0;
}
