#include<stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[45];
};
int main()
{
    union student s1;
    s1.marks=67;
    strcpy(s1.name, "Diiya");
    s1.fav_char='y';
    s1.id=1;


    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
  

}

