// find out maximum number and minimum number from given 10 number//

#include <stdio.h>
int main()
{

    int min, max, i, a[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter Integer number [%d]:", i + 1);
        scanf("%d", &a[i]);
        if (i == 0)
        {
            min = max = a[i];
        }

        else
        {
            if (max < a[i])
            {
                max = a[i];
            }

            if (min > a[i])
            {
                min = a[i];
            }
        }
    }
    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);

    return 0;
}
