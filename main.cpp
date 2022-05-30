#include "header.h"
#include "account.h"

int main()
{
        bool  play = true;
        while(play)
        {

            play = startGame();

            cout<<"A game has ended"<<endl;

        }

    return 0;
}
