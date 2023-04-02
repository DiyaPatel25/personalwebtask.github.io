#include <stdio.h>
int main()
{
    int i, j;
    for (int i = 1; i <= 5; i++)     // * * * * *
    {                                // * * * * *
        for (int j = 1; j <= 5; j++) // * * * * *
        {                            // * * * * *
            printf("* ");            // * * * * *
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)     // *
    {                                // * *
        for (int j = 1; j <= i; j++) // * * *
        {                            // * * * *
            printf("* ");            // * * * * *
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)     // * * * * *
    {                                // * * * *
        for (int j = i; j <= 5; j++) // * * *
        {                            // * *
            printf("* ");            // *
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)     //         *
    {                                //       * *
        for (int j = 1; j <= 5; j++) //     * * *
        {                            //   * * * *
            if ((i + j) <= 5)        // * * * * *

                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i < j)       // *
                             // * *
                printf(" "); // * * *
            else             // * * * *
                printf("*"); // * * * * *
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)     // 12345
    {                                // 12345
        for (int j = 1; j <= 5; j++) // 12345
        {                            // 12345
            printf("%d ", j);        // 12345
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)     // 1
    {                                // 12
        for (int j = 1; j <= i; j++) // 123
        {                            // 1234
            printf("%d ", j);        // 12345
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)         // 12345
    {                                    // 1234
        for (int j = 1; j <= 5 - i; j++) // 123
        {                                // 12
            printf("%d ", j);            // 1
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)     // 1
    {                                // 22
        for (int j = 1; j <= i; j++) // 333
        {                            // 4444
            printf("%d ", i);        // 55555
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)     //     5
    {                                //    45
        for (int j = 1; j <= 5; j++) //   345
        {                            //  2345
            if ((i + j) <= 5)        // 12345

                printf(" ");
            else
                printf("%d", j);
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)     //      1
    {                                //    22
        for (int j = 1; j <= 5; j++) //   333
        {                            //  4444
            if ((i + j) <= 5)        // 55555

                printf(" ");
            else
                printf("%d", i);
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)             // ABCDE
    {                                    // ABCD
        for (j = 1; j <= 6 - i; j++)     // ABC
        {                                // AB
            printf("%c", 'A' + (j - 1)); // A
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {                                   //AAAAA
        for (j = 1; j <= 6 - i; j++)    //BBBB
        {                               //CCC
            printf("%c", 'A' + (i-1));  //DD
        }                               //E
        printf("\n");
    }
    return 0;
}
