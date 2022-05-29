#include "account.h"
#include "header.h"

Player singIn(Player player)
{

    DIR *directory;
    struct dirent *file;

    char path[100] = "D:\\SPL1\\Nerdle";
    string userName;
    string password;


    cout<<"\t\t------------SingIN-------------------"<<endl;


    cout<<"User Name: ";
    cin>>userName;
    //clearing input buffer...
    while ((getchar()) != '\n');

    cout<<"Password: ";
    getline(cin,password);

    cout<<endl;

    player.name = userName;
    player.password = password;


    bool userExist= false;
    userName = userName + ".txt";

    if((directory = opendir(path)) != NULL)
    {
          while( (file = readdir(directory)) != NULL)
          {
              if(userName == file->d_name)
              {
                    userExist = true;
                    break;
              }
          }
    }
    else
    {
        cout<<"Making new directory"<<endl;
        mkdir(path);

    }
    //u
    userName = "D:\\SPL1\\Nerdle\\" + userName;
    if(userExist)
    {
        cout<<"User name \""<<player.name<<"\" taken.\nTry another one"<<endl;
    }
    else
    {

        cout<<"File location: "<<userName<<endl;
        ofstream myFile;
        myFile.open(userName);
        myFile<<player.name<<endl;
        myFile<<player.password<<endl;
        // other thing to be written....

        myFile.close();
        cout<<"Sing In successful"<<endl;

    }

     cout<<"In sign in function: "<<endl;
     cout<<player.name<<endl;
     cout<<player.password<<endl;
     cout<<endl;



    return player;


}
