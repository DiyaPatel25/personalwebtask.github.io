// find factorial of number//

#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter number:");
    scanf("%d", &num);

    while (num>1)
    {
        fact = fact * num;
        num = num - 1;
    }
        printf("Factorial is:%d\n", fact);
    

    return 0;
}
//it is also make from recursion number,if else statement etc//