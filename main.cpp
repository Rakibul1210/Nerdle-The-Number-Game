#include "header.h"
#include "account.h"

int main()
{

    //framing()
    struct Player *player;
    player = loginMenu();

    int choice;
    while(1)
    {

        cout<<"[1] Play Game"<<endl;
        cout<<"[2] Log Out"<<endl;
        cin>>choice;
        if(choice ==  1)
        {


/*
        bool  play = true;
        while(play)
        {

            play = startGame();
            //play = playAgain(play);
            cout<<"\t\t\t NEW GAME STARTED\n\n"<<endl;

        }
*/
        }
        else
        {
            player = loginMenu();
        }
    }
    return 0;
}
