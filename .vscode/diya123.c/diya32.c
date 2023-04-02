#include<stdio.h>
int main()
{
    int rollno[80],marks[90],i;
    for ( i = 1; i <= 3; i++)
    {
        printf("Enter roll number of student [%d]",i);
        scanf("%d",&rollno[i]);
        printf("enter marks of students [%d]",i);
        scanf("%d",&marks[i]);
    }
    for ( i = 1; i <= 3; i++)
    {
        printf("student %d has roll number is %d,marks %d\n",i,rollno[i],marks[i]);
    }
    return 0;
}