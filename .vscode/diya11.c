//given charatcter is capital,small,digit,special character//

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if('a'<=ch && ch<='z')
    {
        printf("Enter character is small");
    }
    else if('A'<=ch && ch<='Z')
    {
        printf("Enter character is capital");
    }
    else if(ch>='1' && ch<='9')
    {
        printf("Enter character is digit");
    }
    else
    {
        printf("Enter character is special character");
    }
    
      return 0;
}
