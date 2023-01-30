#include <stdio.h>
int main()
{
    int marks[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of element %d %d is:\n",i,j);
            scanf("%d",&marks[i][j]);
        }
        
    }
     
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf(" %d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
