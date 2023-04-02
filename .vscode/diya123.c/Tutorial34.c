#include<stdio.h>

void printstr(char str[])

{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //jdfnlqweuj
    
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    printstr(str);
    printf("Using printf %s\n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}

