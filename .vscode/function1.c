#include <stdio.h>

void printHello(); // FUNCTION PROTOTYPE/DECLARATION
void GoodBye();
int main()
{
    printHello(); //
    printHello(); // // FUNCTION CALL
    GoodBye();    //
    return 0;
}
// FUNCTION DEFENATION
void printHello()
{
    printf("Hello!\n");
}
void GoodBye()
{
    printf("GOOODBYE:)\n");
}
