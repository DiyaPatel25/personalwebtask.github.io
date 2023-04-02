#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,str[30];
    char ch;
    printf("Enter string:");
    gets(str);
    printf("Find the character which you find:");
    scanf("%c",&ch);
    printf("Character is on the ");
    for( i = 1; str[i]!='0'; i++)
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