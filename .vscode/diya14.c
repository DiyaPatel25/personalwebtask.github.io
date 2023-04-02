//using swith program sunday to saturday//

#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number between 1 to 7\n");
    scanf("%d",&no);

    switch(no)
    {
        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        case 5:
        printf("Thirsday\n");
        break;
        case 6:
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;

        default:
        printf("Enter valied number\n");
        break;
    }
    
    return 0;
}
