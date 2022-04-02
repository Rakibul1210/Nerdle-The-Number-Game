#include "header.h"


int main()
{
    char *infix_equation,*postfix_equation = new char[1];
    int length;

    infix_equation = getValidEquation();
    cout<<"infix equation: "<<infix_equation<<endl;
    postfix_equation = infixToPostfix( infix_equation );

    int answer = calculateValue( postfix_equation );
    cout<<"\tAnswer: "<<answer<<endl;
    //exit(2);
    length = stringLength(infix_equation);

    int no_of_guess= 1;
    char *player_input;
    bool game_won = false;

    //graphics...............................
    gamePage(answer);

    while(no_of_guess <7)
    {

        cout<<endl;
        cout<<endl<<"\tEnter your Guess_"<<no_of_guess<<": ";

        //from console
        //player_input = getInput();
        // from graphics
        player_input = getInputFromGamePage();

        cout<<"input: "<<player_input<<endl;


        //cout<<stringLength(player_input)<<" "<<stringLength(infix_equation)<<endl;

        if(stringLength(player_input) != stringLength(infix_equation))
        {
            cout<<"\tString Length Must be "<<stringLength(infix_equation)<<endl;
            continue;
        }
        else
        {
            //player_input = infixToPostfix(player_input);
            if( calculateValue( infixToPostfix(player_input) ) != answer)
            {
                cout<<"\t!!The Guess doesn't compute "<<answer<<endl;
                continue;
            }
            else
            {
                if(checkAnswer(infix_equation,player_input))
                {
                    game_won = true;
                    cout<<endl;
                    cout<<"\tCONGRATULATIONS!! "<<endl; //Game won....
                    cout<<"\tYOU WON"<<endl;
                    break;
                }

                no_of_guess++;
            }
        }
    }
    if(!game_won )
    {
        cout<<"\tYOU LOST!!!"<<endl;
        cout<<"\tCorrect answer: "<<infix_equation<<endl;
    }

    //temp();

    return 0;

}
