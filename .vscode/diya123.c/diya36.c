#include<stdio.h>
int main()
{
    int i,n,a[20],min,j,temp;
    printf("Howmany numbers you want to print:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("Enter the arrays[%d]:",i);
        scanf("%d",&a[i]);
    }
    for ( i = 1; i <= n-1; i++)
    {
        min=a[i];
        for ( j = i+1; j <= n; j++)
        {
            if(a[j]<a[i])
            {
                min=j;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d >",a[i]);
        
    }
    printf("%d >",a[i]);
    
    
    
    return 0;
}
