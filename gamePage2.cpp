#include "header.h"


void gamePage2(bool won)
{
    DWORD screen_width = GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height = GetSystemMetrics(SM_CYSCREEN);



    initwindow(screen_width,screen_height, "Nerdle - The Number Game",-3,-3);
    setbkcolor(CYAN);
    cleardevice();



    if(won)
    {
        //outtextxy
        getch();
    }



}
