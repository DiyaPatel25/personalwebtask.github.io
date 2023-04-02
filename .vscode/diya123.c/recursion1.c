#include<stdio.h>
void printbaghho(int count);

int main()
{
    printbaghho(10);
    return 0;
}

void printbaghho(int count)
{
   
    if (count==0)
    {
        return 0;
    }
    printf("Hello dobo\n");
    printbaghho(count - 1);
}