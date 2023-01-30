#include<stdio.h>
int main()
{
    int i,j,raw;

    printf("Enter the number of raws");
    scanf("%d",&raw);


    for (int i = 1; i <= raw; i++)
    {
        for (int j = 1; j <= raw; j++)
        {
            if((i+j)<=raw){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        
    }
    
    
    return 0;
}
