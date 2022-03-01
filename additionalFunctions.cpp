#include "header.h"

int stringLength(char* str){
    int length=0;
    while(*str){
        length++;
        str++;
    }
    return length;
}


bool isNumber(char ch){
    if(ch >= '0' && ch <= '9')
        return true;
    else
        return false;
}
