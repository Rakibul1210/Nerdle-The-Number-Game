#include "header.h"
#define MAX_SIZE_STACK 100


class MY_STACK
{
private:
    int arr[100];
    int top=0;

public:
    void stackPush(int n);
    int stackPop();
};
