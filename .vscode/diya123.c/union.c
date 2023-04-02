#include<stdio.h>
#include<string.h>

union student
{
    int id;
    float marks;
    char name[100];
};

int  main()
{
    union student s[3];
    int i;
    printf("Enter details:");
    for ( i = 0; i < 3; i++)
    {
        printf("Enter name,id,marks");
        scanf("%s",&s[i].name);
        scanf("%d%f",&s[i].id,&s[i].marks);
    }
    printf("Details of student:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%s",s[i].name);
        printf("%d\n",s[i].id);
        printf("%f\n",s[i].marks);
    }
    return 0;
    
}

