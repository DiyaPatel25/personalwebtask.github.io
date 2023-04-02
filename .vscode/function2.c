#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("enter f for french and i for indian: ");
    scanf("%c", &ch);
    if (ch == 'f')
    {
        bonjour();
    }
    else
    {
        namaste();
    }
    return 0;
}

void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}

