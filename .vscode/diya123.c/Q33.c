#include<stdio.h>

int calcPercentage(int sci,int math,int sans);

int main()
{
    int sci=67;
    int math=78;
    int sans=90;
   
    printf("Percentage is:%d ",calcPercentage(sci,math,sans));
    return 0;
}
int calcPercentage(int sci,int math,int sans)
{
    return((sci+math+sans)/3);
}
