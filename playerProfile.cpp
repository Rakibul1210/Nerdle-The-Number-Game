#include "header.h"
#include "account.h"
#include <dirent.h>

using namespace std;


Player login(Player player)
{

    //Player *player = (Player*)malloc(sizeof(Player));
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



    string doubleSlash = "\\";
    userName = path+ doubleSlash + userName;

    if(registered)
    {

        string str;
        string str2;


        ifstream playerFile(userName);
        //playerFile.open(userName);


        getline(playerFile,str);
        cout<<str<<"|"<<endl;

        player.name = str;

        cout<<player.name<<endl;

        getline(playerFile,str2);

        player.password = str2;
        cout<<player.password<<"|"<<endl;



        //other things.....


        //playerFile.close();

        cout<<"Login Successful."<<endl;

    }
    else
    {
        cout<<"Account not registered. Register first."<<endl;
        return player;
    }

//    int i=0;
//    while(player->name)
//    {
//        i++;
//    }

     cout<<"\tIn login function: "<<endl;
     cout<<player.name<<endl;
     cout<<player.password<<endl;
     cout<<endl;




    return player;

}



