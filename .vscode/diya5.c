//CONVERT KILOMETER INTO METER,INCHES,FEET,CENTIMETER//

#include<stdio.h>
int main()
{
    int a;

    printf("Enter the value of a in kilometer:",a);
    scanf("%d",&a);
    printf("Value of a in meter:%d\n",a*1000);
    printf("Value of a in centimeter:%d\n",(a*100000));
    printf("Value of a in inches:%f\n",(a*100000)/2.54);    //1 inch=2.54 cm
    printf("Value of a in feets:%f\n",(a*100000)/30.48);      //1 feet=30.48 cm
    
    return 0;
}
