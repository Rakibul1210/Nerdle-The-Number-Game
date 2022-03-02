#include "header.h"


int main()
{
    char *infix,*postfix = new char[1];
    int length;

    infix = generateRandomEquation();
    //cout<<"Infix: "<<infix<<endl;

    postfix = infixToPostfix(infix);
    //cout<<"postfix: "<<postfix<<endl;
    int answer = calculateValue(postfix);
    cout<<"\tAnswer: "<<answer<<endl;
    length = stringLength(infix);
    cout<<"\tString Length: "<<length<<endl;
    int no_of_guess= 1;
    char *input;


    do{
        cout<<endl<<"\tEnter your Guess_"<<no_of_guess<<": ";
        input = getInput();
        input = infixToPostfix(input);

        if(calculateValue(input) == answer){
        }
        else{
            cout<<"\tThe Guess Doesn't Compute."<<endl;
            continue;
        }
        no_of_guess++;
    }while(no_of_guess <= 6);



//    temp();
    return 0;

}
