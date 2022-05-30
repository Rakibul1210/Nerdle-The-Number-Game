#include "header.h"

bool gameEnded(bool game_won, char *equation)
{

    char playAgain[] = "Play Again?";
    char quitGame[] = "Quit Game";

    if(game_won)
    {
        initwindow(415,160, "Congratulations",517,250);
    }
    else
    {
        initwindow(415,160, "You Lose",517,250);
    }

    setbkcolor(CYAN);
    cleardevice();


    if(game_won)
    {
         setcolor(YELLOW);
         char congrats[] = "Congratulations!! You Have won.";
         settextstyle(10,0,2);
         outtextxy(10,10,congrats);

    }
    else
    {
        //cout<<"##########################################3"<<endl;
        setcolor(YELLOW);
         char losingMessage[100] = "You lost. Nerdle: ";
         strcat(losingMessage, equation);


         settextstyle(10,0,2);
         outtextxy(10,10,losingMessage);

    }
    //delay(5000);
    outtextxy(10, 40, playAgain);

    playAgain[strlen(playAgain) - 1] = '\0';

    //quit game option
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(10,115,119,150);

    //
    settextstyle(10,0,1);
    outtextxy(15,124,quitGame);


    //play again
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,115,410,150);

    settextstyle(10,0,1);
    outtextxy(295,123,playAgain);



    bool choice =  getChoice();
    closegraph();
//    if(choice)
//    {
//        cout<<"he wants to play again!!!!"<<endl;
//    }
//    else
//    {
//        cout<<"Hehe voy paise"<<endl;
//    }
    return choice;



}


bool getChoice()
{
    bool choice;
    POINT cursor;
    int cur_x,cur_y;

    while(true)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
                GetCursorPos(&cursor);

                cur_x = cursor.x;
                cur_y = cursor.y;


                if(cur_x > 535 && cur_x < 635 && cur_y > 395 && cur_y < 425)
                {
                    choice =  false;
                    break;
                }
                if(cur_x > 810 && cur_x <  930 && cur_y > 395 && cur_y <425)
                {
                    choice =  true;
                    break;
                }

                cout<<cur_x<<" "<<cur_y<<endl;
                delay(200);
        }


    }
     return choice;
}
