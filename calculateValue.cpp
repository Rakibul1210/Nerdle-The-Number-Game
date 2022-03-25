#include "header.h"
#include "mySTL.h"

int calculateValue(char* equation)
{
    int number;
    int n=stringLength(equation);

    MY_INT_STACK s;
    for(int i=0;i<n;i++)
    {
        if(equation[i]==' ') // Ignoring spaces
            continue;

        if(isdigit(equation[i])) // isDigit() determines if 0-9
        {
            number=0;
            while(isdigit(equation[i]))// taking bigger multi-digit number as integer...
            {
                number=number*10+equation[i]-'0';
                i++;
            }

            //  Pushing digitNumber to stack as integer...
            s.stackPush(number);

        }
        else//else takes care of operators in postfix expression...
        {
            //  Popping back last two number for performing operations..
            int b = s.stackPop();
            int a = s.stackPop();

            // Checking operator one by one..
            // Then Pushing their operated value
            if(equation[i] == '+')
                s.stackPush(a+b);

            else if(equation[i] == '-')
                s.stackPush(a-b);

            else if(equation[i] == '*')
                s.stackPush(a*b);

            else if(equation[i] == '/')
                s.stackPush(int(a/b));

            else if(equation[i] == '^')
                s.stackPush(pow(a,b));

        }
        //s.printStack();
    }

    return s.stackPop();
}
