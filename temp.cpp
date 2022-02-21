#include "header.h"
#include "mySTL.h"

void temp(){

    MY_STACK s;
    s.stackPush(10);
    s.stackPush(12);
    cout<<s.stackPop()<<endl;
    s.stackPush(15);
    cout<<s.stackPop()<<endl;
    cout<<s.stackPop()<<endl;
    cout<<s.stackPop()<<endl;
    cout<<"voila"<<endl;

}

