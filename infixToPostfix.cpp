#include <bits/stdc++.h>

using namespace std;


char* toPostfix(char*infix)
{
    int i,n;
    char ch;
    char  *postfix;


    //  Scanning the infix expression from left to right...
    for(i=0;i<n;i++)
    {
        if(infix[i]==' ')   //  ignoring spaces
            continue;

        if(isalnum(infix[i]))
        {
            while(isalnum(infix[i])) // taking multi-digit number until space or operator is found
            {
                postfix+=infix[i];
                i++;
            }
            i--;
            postfix+=" ";       //  adding space

        }
        else if(infix[i] == '(') // Pushing left parenthesis to the stack
        {
            pushStack(infix[i]);
        }

        //  If right parenthesis is found
        //  Repeatedly popping form the stack until '(' is found
        else if(infix[i] == ')')
        {
            char ch;
            ch=popStack();
            while(ch != -1 && ch!='(')
            {
                postfix+=ch;
                postfix+=" ";
                ch=popStack();
            }

        }
        else // else take care of operators
        {
            ch=popStack();
            //  Repeatedly popping operators which has higher or same precedence than new one
            if(checkPrecendence(infix[i]) < checkPrecendence(ch)) //
            {
                while((checkPrecendence(infix[i]) <= checkPrecendence(ch)) && (ch != -1))
                {
                    postfix+=ch;
                    postfix+=+" ";
                    ch=popStack();
                }
                pushStack(infix[i]);
            }
            else        // if new operator has lower precedence simply push it to stack
            {
                pushStack(ch);
                pushStack(infix[i]);
            }
        }
// Nothing just diplaying the stack simulation...
#ifdef POSTFIX_STACK
int j;
cout<<"\t";
cout<<infix[i]<<"\t";
for(j=0;j<=top;j++)
{
    cout<<Stack[j]<<" ";
}
    for(;j<6;j++)
    {
        cout<<"  ";
    }
    cout<<postfix<<endl;
    cout<<endl;
#endif // POSTFIX_STACK
    }

    //  Repeatedly popping the stack and adding to POSTFIX until stack is empty
    ch=popStack();
    while(ch != -1)
    {
        postfix+=ch;
        postfix+=+" ";

#ifdef POSTFIX_STACK
int j;
cout<<infix[i]<<"\t";
for(j=0;j<=top;j++)
{
    cout<<Stack[j]<<" ";
}
    for(;j<6;j++)
    {
        cout<<"  ";
    }
    cout<<postfix<<endl;
    cout<<endl;
#endif // POSTFIX_STACK

        ch=popStack();

    }

    return postfix;
}
