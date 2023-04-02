// Write a program to check whether the given number is prime or not.

#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter number:\n");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("\n%d is not prime", num);
            break;
        }
        if (num == i)
        {
            printf("\n %d is prime", num);
        }
    }

        return 0;
}
