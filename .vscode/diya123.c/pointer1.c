#include<stdio.h>
int main()
{
int x;
int *ptr;

ptr=&x; //&x=address of x;//x nu address e pointer ma save thai gayu 
*ptr=0; //x=0 //*ptr is the value of address at poniter
printf("x=%d\n",x);
printf("*ptr=%d\n",*ptr);

*ptr +=5;
printf("x=%d\n",x); //5
printf("*ptr=%d\n",*ptr); //5

(*ptr)++;
printf("x=%d\n",x); //6
printf("*ptr=%d\n",*ptr); //6

return 0;
}

//*ptr=pointer pr na address ni value