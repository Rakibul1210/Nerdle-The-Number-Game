#include "header.h"

#define EASY 1
#define HARD 2


bool startGame()
{



    char *infix_equation,*postfix_equation = new char[1];


    infix_equation = getValidEquation();
    cout<<"infix equation: "<<infix_equation<<endl;
    postfix_equation = infixToPostfix( infix_equation );

    int answer = calculateValue( postfix_equation );
    cout<<"\tAnswer: "<<answer<<endl;


    int no_of_guess= 1;
    char *player_input;
    bool game_won = false;

    //graphics...............................
    gamePage(answer, game_won);

    int dificulty = chooseDifficulty();
    cout<<"DIFFICULTY: "<<dificulty<<endl;
    gamePage(answer, game_won);

    while(no_of_guess <7)
    {

        cout<<endl;
        cout<<endl<<"\tEnter your Guess_"<<no_of_guess<<": ";

        //from console
        //player_input = getInput();

        // from graphics
        player_input = getInputFromGamePage(no_of_guess,answer);

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
                wrongInput(no_of_guess);
                cout<<"\t!!The Guess doesn't compute "<<answer<<endl;
                continue;
            }
            else
            {
                if(checkAnswer(no_of_guess,infix_equation,player_input))
                {
                        game_won = true;
                      return gameEnded(game_won,infix_equation);

                }

                no_of_guess++;
            }
        }
    }
    if(!game_won )
    {

        return gameEnded(game_won,infix_equation);

        cout<<"\tYOU LOST!!!"<<endl;
        cout<<"\tCorrect answer: "<<infix_equation<<endl;
    }

    return false;

}
