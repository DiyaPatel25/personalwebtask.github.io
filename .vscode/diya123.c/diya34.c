#include<stdio.h>
int main()
{
    int i,n,max,min,a[40];
   printf("Howmany numbers you want to print:");
   scanf("%d",&n);

   for ( i = 1; i <= n; i++)
   {
    printf("Enter the arrays max[%d]:",i);
    scanf("%d",&a[i]);
    if(i==0)
    {
        max=a[i];
    }
    else
    {
        if(max<a[i])
        {
           max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }

   }
   printf("Maximum is: %d\n",max);
   printf("Minimum is: %d\n",min);
   return 0;
}