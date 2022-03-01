#include "header.h"


int main()
{
    char *infix,*postfix = new char[1];

    infix = generateRandomEquation();
    cout<<"Infix: "<<infix<<endl;

    infixToPostfix(infix,postfix);
    cout<<"postfix: "<<postfix<<endl;
    int answer = calcultaeEquation(postfix);
    cout<<"Answer: "<<answer<<endl;

//    temp();
    return 0;

}
