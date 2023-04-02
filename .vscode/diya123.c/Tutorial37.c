#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} diya, yashvi, mahi;
// struct student diya,yashvi,mahi;
void print()
{
    printf("%s\n", diya.name);
}

int main()
{
    // struct student diya,yashvi,mahi;//local variable
    diya.id = 21;
    yashvi.id = 22;
    mahi.id = 23;
    diya.marks = 99;
    yashvi.marks = 98;
    mahi.marks = 97;
    diya.fav_char = 'd';
    yashvi.fav_char = 'y';
    mahi.fav_char = 'm';
    // printf("My name is Diya,my id is %d, my marks is %d,my favourite character is %c\n",diya.id,diya.marks,diya.fav_char);
    // printf("My name is yashvi,my id is %d, my marks is %d,my favourite character is %c\n",yashvi.id,yashvi.marks,yashvi.fav_char);
    // printf("My name is mahi,my id is %d, my marks is %d,my favourite character is %c\n",mahi.id,mahi.marks,mahi.fav_char);
    strcpy(diya.name, "clever girl");
    printf("Diya's name is %s\n", diya.name);

    print();
    return 0;
}