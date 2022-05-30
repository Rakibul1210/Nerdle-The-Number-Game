#include "header.h"

bool checkAnswer(int no_of_guess, char *equation, char *player_input)
{
    bool correct_guess = true;
    int n = stringLength(equation);
    cout<<"\t\t\t    ";

    for(int i=0;i<n;i++)
    {
        //sleep(500);
        delay(300);
        if(player_input[i] == equation[i])
        {
            giveHint(no_of_guess-1,i,LIGHTGREEN,player_input[i]);
            cout<<"G";
            //changeSymbolColor(player_input[i],c)


        }
        else
        {
            correct_guess = false;
            bool found=false;
            for(int j=0;j<n;j++)
            {
                if(player_input[i] == equation[j])
                {
                    giveHint(no_of_guess-1,i,YELLOW,player_input[i]);

                    cout<<"P";
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                giveHint(no_of_guess-1,i,BLACK,player_input[i]);

                cout<<"B";
            }

        }

    }


    //changeSymbolColor();




    return correct_guess;

}

bool validEquation(char *equation)
{
    int length = stringLength(equation);
    if((!isNumber(equation[0])) || (!isNumber(equation[length-1])) )
    {
        return false;
    }

    for(int i=0;i<length-1;i++)
    {
        if( !isNumber(equation[i]) && !isNumber(equation[i+1]))
        {
            return false;
        }
    }
    return true;
}

void giveHint(int i,int j,colors color,char ch)
{

    char symbol[2];
    symbol[0] = ch;
    symbol[1] = '\0';

    setcolor(color);

    settextstyle(10,0,5);
    outtextxy(466+70*j,67+70*i,symbol);


}

//void changeSymbolColor(char ch, )
//{
//    int n;
//    if(ch >= '0' && ch <='9' )
//    {
//        n = ch - '0';
//    }
//    else if(ch  == '+')
//    static int symbol[14] = {0};
//
//    if()
//}
