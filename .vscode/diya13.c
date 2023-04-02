//prepare pay sleep using following data//

#include<stdio.h>
int main()
{
    float basic;
    printf("Enter Basic Salary\n");
    scanf("%f",&basic);

    printf("================================\n");    
    printf("           SALARY SLIP          \n");
    printf("================================\n"); 
    printf("Basic : %.2f\n",basic);
    printf("DA : %.2f\n",basic*0.10);
    printf("HRA : %.2f\n",basic*0.075);
    printf("Ma : %.2f\n",300);
    printf("================================\n");
    printf("GROSS : %.2f\n",basic+(basic*0.1)+(basic*0.075)+300);
    printf("================================\n"); 
    printf("pf : %.2f\n",basic*0.125);
    printf("================================\n"); 
    printf("NET : %.2f\n",basic+(basic*0.1)+(basic*0.075)+300)-(basic*0.125);
    printf("================================\n"); 


    return 0;
}
