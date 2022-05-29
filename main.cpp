#include "header.h"
#include "account.h"

int main()
{
//     Player player;
//     player = loginMenu(player);
//
//     int choice;
//
//     while(1)
//     {
//
//        cout<<"\t\tWelcome: "<<player.name<<endl;
//        cout<<endl;
//        cout<<"\t[1] Play Game"<<endl;
//        cout<<"\t[2] Log Out"<<endl;
//        cin>>choice;
//        if(choice ==  1)
//        {



        bool  play = true;
        while(play)
        {

            play = startGame();
            //play = playAgain(play);
            cout<<"\t\t\t NEW GAME STARTED\n\n"<<endl;

        }

//        }
//        else
//        {
//            player = loginMenu(player);
//        }
//    }
    return 0;
}
