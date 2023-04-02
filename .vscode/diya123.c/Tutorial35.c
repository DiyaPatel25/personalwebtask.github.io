#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="diya";
    char s2[]="divya";
    char s3[54];
    //puts(strcmp(s1,s2));

    strcpy(s3,strcat(s1,s2));
    puts(s3);//niche batayelu ahiya kryu che.

    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("The reverse string of s1 is:");
    puts(strrev(s1));
    printf("The reverse string of s2 is:");
    puts(strrev(s2));

    //s3=strcat(s1,s2);  //this is not allowed because s3 is an array.
    //avu karvu hoy to s3 ma s1,s2 copy krvanu.

    strcpy(s3,strcat(s1,s2));
    puts(s3); //output ultu avse because pehla reverse krine achi copy kryu che
              //etle nai to jo pehla j kri didhu hot to avu na that

              printf("The strcmp for s1 and s2 is %d",strcmp(s1,s2));
              //we cannot accept that strcmp always gives ASCII values
              
    return 0;
}
