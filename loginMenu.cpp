#include "account.h"

Player loginMenu(Player player)
{
    //Player *player = (Player*)malloc(sizeof(Player));

    int choice ;
    cout<<"\t\t[1] Login"<<endl;
    cout<<"\t\t[2] Sign In"<<endl;
    cout<<"\t\t:";
    cin>>choice;
    getchar();

     if(choice == 1)
     {
        player = login(player);
     }
     if(choice == 2)
     {
        player = singIn(player);
     }



//    Upper_angel;
//    Lower_angel(30);

    return player;


}



void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void Upper_angel()
{
    cout<<"skgsgr"<<endl;
    char x=205;
    gotoxy(0,0);
    printf("%c",201);
    for(int i=0;i<30;i++)
        {
            printf("%c",x);
        }
    gotoxy(81,0);
    for(int i=0;i<30;i++)
        {
            printf("%c",x);
        }
    printf("%c\n",187);
    for(int i=0;i<7;i++)
    {
        gotoxy(0,i+1);
        printf("%c",186);
        gotoxy(111,i+1);
        printf("%c\n",186);
    }
}

void Lower_angel(int zoto_tuku_nice)
{
    for(int i=0;i<7;i++)
    {
        gotoxy(0,zoto_tuku_nice+i+1);
        printf("%c",186);
        gotoxy(111,zoto_tuku_nice+i+1);
        printf("%c\n",186);
    }
    char x=205;
    printf("%c",200);
    for(int i=0;i<30;i++)
        {
            printf("%c",x);
        }
        for(int i=0;i<50;i++)printf(" ");
    for(int i=0;i<30;i++)
        {
            printf("%c",x);
        }
    printf("%c",188);

}
