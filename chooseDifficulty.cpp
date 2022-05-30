#include "header.h"

int chooseDifficulty()
{

    //cout<<"\n\n\nwe are at choose difficulty function\n"<<endl;
    DWORD screen_width = GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height = GetSystemMetrics(SM_CYSCREEN);
    char welcome[] = "Nerdle - The Number game";

    char gameName[] = "Nerdle - The Number Game";

    char Hard[] = "Hard Mode";
    char Easy[] = "Easy Mode";

    initwindow(screen_width,screen_height, gameName,-3,-3);

    cout<<"window drawn"<<endl;
    setbkcolor(CYAN);
    cleardevice();

     setcolor(WHITE);
     settextstyle(10,0,5);
     outtextxy(430,20,welcome);






    //EASY
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(500,130,930,180);

    settextstyle(10,0,5);
    outtextxy(600,135,Easy);


    //Hard
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(500,200,930,250);

    settextstyle(10,0,5);
    outtextxy(600,205,Hard);


    //instruction.........................
    char str[] = "How to Play Nerdle:";
    char str1[] = "-> Guess the NERDLE in 6 tries.";
    char str2[] = "-> Each guess is a calculation.";
    char str3[] = "-> You can only use 0 1 2 3 4 5 6 7 8 9 + - * or /";
    char str4[] = "-> In Easy mode your guess has to be a valid calculation";
    char str5[] = "-> In Hard mode your guess has to be a valid calculation and";
    char str55[] ="   must calculated to the given nerdle";
    char str6[] = "-> After each guess, the color of the character will change ";
    char str66[]="   to show how close your guess was to the solution.";
    char green[] = "GREEN";
    char yellow[] = "YELLOW";
    char black[] = "BLACK";
    char g[] = ": character in the solution and in the correct spot.";
    char y[] = ": character in the solution but in the wrong spot.";
    char b[] = ": character is not in the solution in any spot.";

    setcolor(WHITE);
    settextstyle(10, 0, 3);
    outtextxy(300, 400, str);
    outtextxy(300, 440, str1);
    outtextxy(300, 470, str2);
    outtextxy(300, 500, str3);
    outtextxy(300, 530, str4);
    outtextxy(300, 560, str5);
    outtextxy(300, 590, str55);
    outtextxy(300, 620, str6);
    outtextxy(300, 650, str66);

    setcolor(LIGHTGREEN);
    outtextxy(340, 680,green);
    setcolor(WHITE);
    outtextxy(440, 680, g);

    setcolor(YELLOW);
    outtextxy(340, 710,yellow);
    setcolor(WHITE);
    outtextxy(440, 710, y);

    setcolor(BLACK);
    outtextxy(340, 740,black);
    setcolor(WHITE);
    outtextxy(440, 740, b);



    //end of instruction..................


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


                if(cur_x > 500 && cur_x < 950 && cur_y > 150 && cur_y < 200)
                {
                    difficulty =  1;
                    break;
                }
                if(cur_x > 500 && cur_x < 930 && cur_y > 220 && cur_y <270)
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

