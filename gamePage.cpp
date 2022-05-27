#include "header.h"

void gamePage(int answer,bool game_won)
{



    char symbol[7];
    char temp[10] = "Answer: ";
    char *ans = temp;
    DWORD screen_width = GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height = GetSystemMetrics(SM_CYSCREEN);

//    cout<<screen_height<<endl;
//    cout<<screen_width<<endl;

    initwindow(screen_width,screen_height, "Nerdle - The Number Game",-3,-3);
    setbkcolor(CYAN);
    cleardevice();

    // Game title
//    char name[] = "Nerdle - The Number Game";
//    settextstyle(10,0,2);
//    setcolor(YELLOW);
//    outtextxy(580,8,name);

    //printing answer
    //ans = "Answer: ";
    setcolor(WHITE);
    settextstyle(10,0,5);
    outtextxy(580,8,ans);
    cout<<"Answer: "<<answer<<endl;
    ans = numToString(answer);
    cout<<ans<<endl;
    setcolor(WHITE);
    settextstyle(10,0,5);
    outtextxy(780,8,ans);


    for(int i=0;i<351;i = i+70)
    {
        for(int j=0;j<500;j = j+70)
        {
            //Sleep(300);
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            rectangle(450+j,60+i,510+j,120+i);
            //floodfill(451+j,71+i,WHITE);
        }
    }



    // making buttons....
    //0-9

    symbol[0] = '0';
    symbol[1] = '\0';
    int n=0;
    for(int i=0;i<500;i+=55)
    {
            setcolor(YELLOW);
            //setfillstyle(0,WHITE);
            rectangle(450+i,560,500+i,610);
            //floodfill(451+i,571,WHITE);

            settextstyle(10,0,5);
            //setcolor(RED);
            symbol[0] = '0'+n;n++;
            outtextxy(463+i,565,symbol);

    }

    //plus
    rectangle(505,620,555,670);
    symbol[0] = '+';
    outtextxy(518,625,symbol);

    //minus
    rectangle(560,620,610,670);
    symbol[0] = '-';
    outtextxy(573,625,symbol);

    // multiply
    rectangle(615,620,665,670);
    symbol[0] = '*';
    outtextxy(628,628,symbol);

    //divisor
    rectangle(670,620,720,670);
    symbol[0] = '/';
    outtextxy(683,625,symbol);


    //delete
    settextstyle(10,0,1);
    rectangle(725,620,830,670);
    char dlt[] =  "Delete";
    outtextxy(745,635,dlt);

    //delay(500);

    //enter
    rectangle(835,620,940,670);
    char enter[] = "Enter";
    outtextxy(858,635,enter);


    if(game_won)
    {
         char congrats[] = "congratulations!! You Have won.";
         char playAgain[] = "Play Again?";
         setcolor(YELLOW);
         settextstyle(10,0,5);
         outtextxy(858,750,congrats);
         outtextxy(858, 800, playAgain);
         getch();


    }




}

