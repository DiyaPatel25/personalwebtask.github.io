//find the sum and average of different numbers which are accepted by user as many as user wants//

#include<stdio.h>
int main()
{
    int num,i=0,val,sum=0;
    float avg;
    printf("Enter howmany numbers which you want to sum and average");
    scanf("%d",&num);
    
    while(i<num)
    {
        printf("Enter value of a[%d]:",i++);
        scanf("%d",&val);
        sum=sum+val;
        avg=sum/num;
    }
    printf("sum:%d\n",sum);
    printf("average:%f\n",avg);
    
    return 0;
}

