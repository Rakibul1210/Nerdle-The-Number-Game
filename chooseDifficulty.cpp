#include "header.h"

int chooseDifficulty()
{

    char difficulty[] = "Choose Difficulty ";

    char Hard[] = "Hard";
    char Easy[] = "Easy";

    initwindow(415,160, difficulty,517,250);

    setbkcolor(CYAN);
    cleardevice();



     setcolor(YELLOW);
     settextstyle(10,0,2);
     outtextxy(10,10,difficulty);




    //quit game option
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(10,115,119,150);

    settextstyle(10,0,1);
    outtextxy(15,124,Easy);


    //play again
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,115,410,150);

    settextstyle(10,0,1);
    outtextxy(295,123,Hard);



    int difclty =  getDifficulty();
    cout<<"hehehe"<<endl;
    closegraph();

    if(difclty == 2)
    {
        return 2;
        cout<<"choice = HARD"<<endl;
    }
    else
    {
        return 1;
        cout<<"choice = Easy"<<endl;
    }

    return difclty;

}


int getDifficulty()
{
    int difficulty;
    POINT cursor;
    int cur_x,cur_y;
    cout<<"hello"<<endl;

    while(true)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
                GetCursorPos(&cursor);

                cur_x = cursor.x;
                cur_y = cursor.y;


                if(cur_x > 535 && cur_x < 635 && cur_y > 395 && cur_y < 425)
                {
                    difficulty =  1;
                    break;
                }
                if(cur_x > 810 && cur_x <  930 && cur_y > 395 && cur_y <425)
                {
                    difficulty =  2;
                    break;
                }

                cout<<cur_x<<" "<<cur_y<<endl;
                delay(200);
        }


    }
    cout<<"dificulty = "<<difficulty<<endl;
     return difficulty;
}

