#include "header.h"
#include "mySTL.h"

// this temp file is to check things temporarily
// gonna delete this later
void temp(){

    char *str = "79-93-44";
    cout<<"infix: "<<str<<endl;
    str = infixToPostfix(str);
    cout<<"postfix: "<<str<<endl;
    cout<<"value: "<<calculateValue(str)<<endl;
    exit(2);


}

