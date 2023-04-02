// Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50.
#include <stdio.h>

int main()
{
    int person, height, weight, count = 0;
    for (person = 0; person < 5; person++)
    {
        printf("\n Enter Detail of Person - %d", person + 1);
        printf("\n Enter Height : ");
        scanf("%d", &height);
        printf("\n Enter Weight : ");
        scanf("%d", &weight);
        if (height > 170)
        {
            if (weight < 50)
            {
                count++;
            }
        }
    }
    printf("\n Total Person having Height > 170 and Weight < 50 : %d", count);

    return 0;
}