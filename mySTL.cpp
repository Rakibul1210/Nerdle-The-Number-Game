#include "header.h"

#include "mySTL.h"


using namespace std;




void MY_STACK :: stackPush(int n){
        if(top >= MAX_SIZE_STACK){
            cout<<"\aSTACK OVERFLOW"<<endl;
            return;
        }
        arr[top++] = n;
}
int MY_STACK :: stackPop(){
        if(top <= 0){
            cout<<"\aSTACK UNDERFLOW"<<endl;
            return -1;
        }
        return arr[--top];
}


//
//typedef struct INT_STACK IntStack;
//typedef struct CHAR_STACK CharStack;
//
//struct INT_STACK{
//    int int_stack[100];
//    int top=-1;
//};
//
//struct CHAR_STACK{
//    char int_stack[100];
//    int top=-1;
//};
//
//
//
//void pushStack(IntStack s,int n){
//    if( )
//}
