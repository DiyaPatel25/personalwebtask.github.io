#include<stdio.h>
int main()
{
    int i,j,a,n,number[30];
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for ( i = 0; i < n; ++i)  
    {
        printf("Enter the numbers: \n");
        scanf("%d",&number[i]);

        for ( j=i+1; j < n; ++j)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;

            }
        }
        
    }
    
    printf("The numbers arranged in ascending order are given below\n");
    for ( i = 0; i < n; ++i)
    {
        printf("%d\n",number[i]);
    }
    
}