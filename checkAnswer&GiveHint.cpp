#include "header.h"

bool checkAnswer(char *equation, char *player_input){
    bool correct_guess = true;
    int n = stringLength(equation);
    cout<<"\t\t\t    ";
    for(int i=0;i<n;i++)
    {
        if(player_input[i] == equation[i])
        {
            cout<<"G";
        }
        else
        {
            correct_guess = false;
            bool found=false;
            for(int j=0;j<n;j++)
            {
                if(player_input[i] == equation[j])
                {
                    cout<<"P";
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                cout<<"B";
            }

        }
    }
    cout<<endl;

    return correct_guess;

}
