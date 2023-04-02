#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char str[30],ch,flag=1;

    printf("Enter string:\n");
    gets(str);
    printf("Enter character to search in string:\n");
    scanf("%c",&ch);
    printf("\n Character  ");
    for ( i = 1;str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            printf("%d\n",i);
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("NOT FOUND");
    }

    return 0;
}
