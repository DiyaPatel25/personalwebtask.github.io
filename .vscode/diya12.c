//

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
        
    {
        printf("DISTINCTION");
    }
    else if (marks <= 79 && marks >= 60)
    {
        printf("FIRST CLASS");
    }
    else if (marks <= 59 && marks >= 40)
    {
        printf("SECOND CLASS");
    }
    else
    {
        printf("SORRY! YOU ARE FAIL");
    }
    return 0;
}
