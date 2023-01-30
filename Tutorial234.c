#include<stdio.h>
int main(void)
{
    int r1,r2,c1,c2;
    printf("Enter the number of rows for first matrix:\n");
    scanf("%d",&r1);
    printf("Enter the number of column for first matrix:\n");
    scanf("%d",&c1);
    printf("Enter the number of raws for second matrix:\n");
    scanf("%d",&r2);
    printf("Enter the number f column for seconf matrix:\n");
    scanf("%d",&c2);

    if(c1!=r2){
        printf("Matrices cannot be multiplied together");

    }
    else{
        int m1[r1][c1],m2[r2][c2];
        for ( int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                
             printf("Enter first matrix elements\n");
             scanf("%d",&m1[i][j]);
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for ( int j = 0; j < c2; j++)
            { 
             printf("Enter second matrix elements\n");
             scanf("%d",&m2[i][j]);
            }
        }
        int mul[r1][c2];
        for ( int i = 0; i < r1; i++)
        {
            for (int  j = 0; j < c2; j++)
            {
                mul[i][j]=0;
                for ( int k = 0; k < c1; k++)
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