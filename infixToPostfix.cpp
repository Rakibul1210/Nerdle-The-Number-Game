#include "header.h"
#include "mySTL.h"
#define POSTFIX_STACK

char *infixToPostfix(char* infix)
{
    int n,pl=0;
    char ch;
    char *postfix = new char[1];

    // User defined Stack : MY_STACK
    MY_STACK s;

    // User defined string length function : int stringLength(char *str)
    n = stringLength (infix);

    for(int i = 0; i < n ; i++)
    {
        if(infix[i] == ' ')
            continue;
        if( isNumber(infix[i]) )
        {
            while( isNumber(infix[i]) ) // taking multi-digit number until space or operator is found
            {
                postfix[pl++] = infix[i];
                i++;
            }
            i--;
            postfix[pl++] = ' ';       //  adding space

        }
        else if(infix[i] == '(') // Pushing left parenthesis to the stack
        {
            s.stackPush(infix[i]);

        }

        //  If right parenthesis is found
        //  Repeatedly popping form the stack until '(' is found
        else if( infix[i] == ')' )
        {
            char ch;
            ch = s.stackPop();
            //ch=s.stackPop();
            while(ch != -1 && ch!='(')
            {
                postfix[pl++] = ch;
                postfix[pl++] = ' ';
                ch = s.stackPop();
            }
        }
        else // else take care of operators
        {
            //ch=s.stackPop();
            ch = s.stackPop();
            //  Repeatedly popping operators which has higher or same precedence than new one
            if(checkPrecendence(infix[i]) <= checkPrecendence(ch)) //
            {
                while((checkPrecendence(infix[i]) <= checkPrecendence(ch)) && (ch != -1))
                {
                    postfix[pl++] = ch;
                    postfix[pl++] = ' ';
                    ch=s.stackPop();
                }
                s.stackPush(infix[i]);
            }
            else        // if new operator has lower precedence simply push it to stack
            {
                s.stackPush(ch);
                s.stackPush(infix[i]);
            }
        }

    }

    //  Repeatedly popping the stack and adding to POSTFIX until stack is empty
    ch=s.stackPop();
    while(ch != -1)
    {
        postfix[pl++] = ch;
        postfix[pl++] = ' ';

        ch=s.stackPop();

    }
    postfix[pl] = '\0';
    //cout<<"Postfix: "<<postfix<<endl;
    return postfix;

}

//      Checking Level of plus,minus,multiple,division & power....
int checkPrecendence(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

