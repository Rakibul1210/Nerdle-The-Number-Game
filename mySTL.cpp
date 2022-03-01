#include "header.h"
#include "mySTL.h"

using namespace std;

void MY_STACK :: stackPush(char ch){
        if(top >= MAX_SIZE_STACK){
            cout<<"\aSTACK OVERFLOW"<<endl;
            return;
        }
        arr[top++] = ch;
}

char MY_STACK :: stackPop(){
        if(top <= 0){
            //cout<<"\aSTACK UNDERFLOW"<<endl;
            return -1;
        }
        return arr[--top];

}
void MY_STACK :: printStack(){
    cout<<"stack: ";
    for(int i=0;i<top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// integer........................

void MY_INT_STACK :: stackPush(int n){
        if(top >= MAX_SIZE_STACK){
            cout<<"\aSTACK OVERFLOW"<<endl;
            return;
        }
        arr[top++] = n;
}

int MY_INT_STACK :: stackPop(){
        if(top <= 0){
            //cout<<"\aSTACK UNDERFLOW"<<endl;
            return -1;
        }
        return arr[--top];

}
void MY_INT_STACK :: printStack(){
    cout<<"stack: ";
    for(int i=0;i<top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
