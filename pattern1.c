#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (int i = 0; i<n;i++)
    {
       // print(i+1) stars
       for(int j=0;j<i+1;j++) //i=1 hase to 2 * and i=0 hase to 1 * joie etle 
       {
       printf("?");
       }
    
    printf("\n");
    }
    return 0;
}
