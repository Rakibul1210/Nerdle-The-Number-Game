#include "header.h"
#include "account.h"
#include <dirent.h>

using namespace std;


Player* login()
{

    DIR *directory;
    struct dirent *file;
    char path[100] = "D:\\SPL1\\Nerdle";

    string userName;
    string password;

    cout<<"User Name: ";
    cin>>userName;
    //clearing input buffer...
    while ((getchar()) != '\n');

    cout<<"Password: ";
    getline(cin,password);

    userName = userName + ".txt";

    cout<<endl;
    cout<<"UserName: "<<userName<<endl;
    cout<<"Password: "<<password<<endl;

    cout<<endl;

    bool registered =  false;
    if((directory = opendir (path)) != NULL)
    {
          while( (file = readdir(directory)) != NULL)
          {
              if(userName == file->d_name)
              {
                    registered = true;
                    break;
              }
          }
    }
    else
    {
        cout<<"Making new directory"<<endl;
        mkdir(path);
    }

    //cout reslut
    Player *player;
    if(registered)
    {

        ifstream playerFile;
        playerFile.open(userName);
        playerFile>>player->name>>endl;
        playerFile>>player->password>>endl;

        //other things.....


        playerFile.close();

        cout<<"Login Successful."<<endl;

    }
    else
    {
        cout<<"Account not registered. Register first."<<endl;
        return ;
    }



    return player;

}



