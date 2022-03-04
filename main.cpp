#include "header.h"


int main()
{
    gamePage();
    char *infix_equation,*postfix_equation = new char[1];
    int length;

    infix_equation = generateRandomEquation();
    //cout<<"infix_equation: "<<infix_equation<<endl;

    postfix_equation = infixToPostfix(infix_equation);
    //cout<<"postfix_equation: "<<postfix_equation<<endl;
    int answer = calculateValue(postfix_equation);
    cout<<"\tAnswer: "<<answer<<endl;
    length = stringLength(infix_equation);
    cout<<"\tString Length: "<<length<<endl;
    int no_of_guess= 1;
    char *player_input;


    while(no_of_guess <7)
    {
        cout<<endl<<"\tEnter your Guess_"<<no_of_guess<<": ";
        player_input = getInput();

        //player_input = infixToPostfix(player_input);

       // cout<<stringLength(player_input)<<" "<<stringLength(infix_equation)<<endl;

        if(stringLength(player_input) != stringLength(infix_equation))
        {
            cout<<"\tMinimum String Length "<<stringLength(infix_equation)<<" required."<<endl;
            continue;
        }
        else
        {

            if( calculateValue( infixToPostfix(player_input) ) != answer)
            {
                cout<<"The Guess doesn't compute "<<answer<<endl;
                continue;
            }
            else
            {
                if(checkAnswer(infix_equation,player_input))
                {
                    cout<<"\tCONGRATULATIONS!!!"<<endl; //Game won....
                    break;
                }

                no_of_guess++;
            }
        }
    }

    temp();

    return 0;

}
