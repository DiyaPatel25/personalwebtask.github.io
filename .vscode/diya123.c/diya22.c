// calculate average and total of 5 students for 3 subjects (use nested for loops)//

#include <stdio.h>
#include <string.h>
int main()
{
    int student = 0, sum = 0, marks = 0, sub;
    float avg;
    for (student = 0; student < 5; student++)
    {
        sum=0;
        printf("Enter Marks for student=%d\n", student + 1);
        for (sub = 0; sub < 3; sub++)
        {
            printf("Enter Marks for subject=%d\n", sub + 1);
            scanf("%d", &marks);
            sum = sum + marks;
        }
        printf("For student-%d\n:",student+1);
        printf("Sum=%d\n", sum);
        printf("Average=%f\n", ((float)sum) / sub);
    }

    return 0;
}
