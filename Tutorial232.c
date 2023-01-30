#include <stdio.h>
int main()
{
    int marks[6];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of %d element of the array:\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element of the araay is %d\n",i,marks[i]);
        
    }
    
    

    // printf("Marks of student 1 is %d\n", marks[0] = 78);
    // printf("Marks of student 2 is %d\n", marks[1] = 89);
    // printf("Marks of student 3 is %d\n", marks[2] = 67);
    // printf("Marks of student 4 is %d\n", marks[3] = 34);
    // printf("Marks of student 5 is %d\n", marks[4] = 43);

    return 0;
}
