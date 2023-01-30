# include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want multiplication table of:\n" );
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n",num);

    printf("%d x 5 = %d\n", num, num*5);
    return 0;
}
