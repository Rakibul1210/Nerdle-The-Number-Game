#include "header.h"

#define EASY 1
#define HARD 2


bool startGame()
{

    char *infix_equation,*postfix_equation = new char[1];


    infix_equation = getValidEquation();
    cout<<"\tinfix equation: "<<infix_equation<<endl;
    postfix_equation = infixToPostfix( infix_equation );

    int answer = calculateValue( postfix_equation );
    cout<<"\tAnswer: "<<answer<<endl;


    int no_of_guess= 1;
    char *player_input;
    bool game_won = false;

    //graphics...............................
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



        if(stringLength(player_input) != stringLength(infix_equation))
        {
            cout<<"\tString Length Must be "<<stringLength(infix_equation)<<endl;
            continue;
        }
        else
        {
            if(dificulty == HARD)
            {

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
            else if(dificulty == EASY)
            {
                if(validEquation(player_input))
                {
                    if(checkAnswer(no_of_guess,infix_equation,player_input))
                    {
                            game_won = true;
                            return gameEnded(game_won,infix_equation);


                    }
                    no_of_guess++;
                }
                else
                {
                    wrongInput(no_of_guess);
                    cout<<"\t!!The Guess does n't compute "<<answer<<endl;
                }
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
