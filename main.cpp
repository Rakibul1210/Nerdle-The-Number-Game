#include "header.h"



int main()
{
    char *infix,*postfix = new char[1];

    infix = generateRandomEquation();
    cout<<"Infix: "<<infix<<endl;

    infixToPostfix(infix,postfix);
    cout<<"postfix: "<<postfix<<endl;


//    temp();
    return 0;

}
