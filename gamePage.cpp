#include "header.h"

void gamePage()
{

    DWORD screen_width = GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height = GetSystemMetrics(SM_CYSCREEN);

    cout<<screen_height<<endl;
    cout<<screen_width<<endl;

    initwindow(screen_width,screen_height, "Nerdle - The Number Game",-3,-3);
    setbkcolor(CYAN);

    cleardevice();
    for(int i=0;i<351;i = i+70)
    {
        for(int j=0;j<500;j = j+70)
        {
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            rectangle(450+j,70+i,510+j,130+i);
            floodfill(451+j,71+i,WHITE);
        }
    }






    getch();
    closegraph();

}

