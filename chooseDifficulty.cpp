#include "header.h"

int chooseDifficulty()
{

    cout<<"\n\n\nwe are at choose difficulty function\n\n\n"<<endl;
    DWORD screen_width = GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height = GetSystemMetrics(SM_CYSCREEN);

    char gameName[] = "Nerdle - The Number Game";
    char difficulty[] = "Choose Difficulty: ";

    char Hard[] = "Hard";
    char Easy[] = "Easy";

    initwindow(screen_width,screen_height, gameName,-3,-3);

    setbkcolor(CYAN);
    cleardevice();



     setcolor(WHITE);
     settextstyle(10,0,5);
     outtextxy(500,250,difficulty);




    //EASY
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(500,300,930,350);

    settextstyle(10,0,5);
    outtextxy(660,305,Easy);


    //Hard
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(500,370,930,420);

    settextstyle(10,0,5);
    outtextxy(660,375,Hard);


    delay(500);
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


                if(cur_x > 500 && cur_x < 950 && cur_y > 300 && cur_y < 350)
                {
                    difficulty =  1;
                    break;
                }
                if(cur_x > 500 && cur_x < 930 && cur_y > 370 && cur_y <420)
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

