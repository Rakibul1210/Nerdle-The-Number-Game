#include "account.h"
#include "header.h"

Player* singIn()
{

    DIR *directory;
    struct dirent *file;

    char  path[100] = "D:\\SPL1\\Nerdle";
    string userName;
    string password;


    Player *p = (Player*)malloc(sizeof(Player));
    cout<<"\t\t------------SingIN-------------------"<<endl;


    cout<<"User Name: ";
    cin>>userName;
    //clearing input buffer...
    while ((getchar()) != '\n');

    cout<<"Password: ";
    getline(cin,password);

    cout<<endl;

    p->name = userName;
    p->password = password;


    bool userExist= false;
    userName = userName + ".txt";

    if((directory = opendir("D:\\SPL1\\Nerdle")) != NULL)
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
        cout<<"User name \""<<p->name<<"\" taken.\nTry another one"<<endl;
    }
    else
    {

        cout<<"File location: "<<userName<<endl;
        ofstream myFile;
        myFile.open(userName);
        myFile<<p->name<<endl;
        myFile<<p->password<<endl;
        // other thing to be written....

        myFile.close();
        cout<<"Sing In successful"<<endl;

    }




    return p;


}
