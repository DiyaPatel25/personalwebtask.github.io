#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1 If you have passed Maths and Science exam both\n");1
    printf("Enter 2 If you have passed Maths or Science only\n");
    scanf("%d",&a);

    if (a==1)
    {
    printf("Congratulation! You got 45$");
    }

    else if (a==2)
    {
        printf("Good, You got 25$ but you need to improve ypurself");
    }
    



    return 0;
}
