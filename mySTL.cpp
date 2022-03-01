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
