#include<stdio.h>
int main(void)
{
    int r1,r2,c1,c2;
    printf("Enter the number of raws for first matrix:");
    scanf("%d",&r1);
    printf("Enter the number of colums for first matrix:");
    scanf("%d",&c1);
    printf("Enter the number of raws for second matrix:");
    scanf("%d",&r2);
    printf("Enter the number of colums for first matrix:");
    scanf("%d",&c2);

    if(r2!=c1){
    printf("Matrix cannot be multiplied");
    }
    else{
    int m1[r1][c1],m2[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the element for first matrix:");
            scanf("%d",&m1[i][j]);
        }
        
    }
    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element for second matrix:");
            scanf("%d",&m2[i][j]);
        }
        
    }

    int mul[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[r1][c2]=0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    }



    return 0;
}
    