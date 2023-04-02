// FAHRENHIT TO CENTIGRATE//

#include <stdio.h>
int main()
{
    float C, F;

    printf("Enter the value of C:");
    scanf("%f", &C);
    F = (C * 1.8) + 32;
    printf("%f C = %f F", C, F);

    return 0;
}
