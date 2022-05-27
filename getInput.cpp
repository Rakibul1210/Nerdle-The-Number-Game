#include "header.h"


char *getInput()
{
    char *input = new char [1];
    int length=0;
    char ch='0';
    while(ch != 10)
    {
        cin.get(ch);
        if(ch != ' ' && ch != 10)
        {
                input[length++] = ch;
        }
    }
    input[length] = '\0';

    cout<<endl;

    return input;

}


char *getInputFromGamePage(int no_of_guess,int answer)
{
    char *input = new char[100];
    int length=0;
    no_of_guess--;
    bool stringComplete = false;
    char ch;
    char symbol[2];
    symbol[1] = '\0';
    POINT cursor;
    int cur_x,cur_y;
    int prev_x=-1,prev_y=-1;

    for(int i=0;i<570;i = i+70)
    {
        //cout<<"i = "<<i<<endl;
        while(true)
        {
            if(GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursor);
                cur_x = cursor.x;
                cur_y = cursor.y;
                if(prev_x != cur_x && prev_y != cur_y)
                {
                    prev_x = cur_x;
                    prev_y = cur_y;


                    //cout<<cursor.x<<" "<<cursor.y<<endl;
                    //rectangle(505,620,555,670);
                    ch = checkMouseClick(cur_x,cur_y);
                    if(ch != 'x')
                    {
                        if(ch == 'd')
                        {
                            if(length > 0) // deleting last input
                            {
                                //cout<<"DELETE: ";
                               // cout<<i<<" "<<length<<" - > ";
                                i = i-70;
                                setcolor(RED);
                                setfillstyle(SOLID_FILL,RED);
                                rectangle(450+i,60+70*no_of_guess,510+i,120+70*no_of_guess);
                                floodfill(451+i,71+no_of_guess*70,RED);
                                length--;
                               // cout<<i<<" "<<length<<endl;

                                setcolor(WHITE);
                                setfillstyle(SOLID_FILL,CYAN);
                                rectangle(450+i,60+70*no_of_guess,510+i,120+70*no_of_guess);
                                floodfill(451+i,71+70*no_of_guess,WHITE);
                                i = i-70;
                                break;
                            }
                            //delete last element...
                        }
                        else if(ch == 'e')
                        {
                            if(length == 8)
                            {
                                stringComplete = true;
                                break;
                            }
                        }
                        else if(length != 8)
                        {
                            setcolor(WHITE);
                            input [length++] = ch;
                            symbol[0] = ch;

                            settextstyle(10,0,5);
                            outtextxy(466+i,67+70*no_of_guess,symbol);
                            break;
                        }


                        }
                    }

                }
            }

            if(stringComplete)
                break;

            delay(50);

        }



    input[length] = '\0';

    cout<<input<<endl;
    return input;


}

char checkMouseClick(int x,int y)
{
    int n=0;

    //cout<<"->"<<x<<" "<<y<<endl;
    for(int i=450;i<950;i = i+ 55)
    {

        if((x > i && x<i+50 ) && (y>570 && y<630))
        {
           // cout<<"\t\t\t\t"<<'0'+n<<endl;

            return '0'+n;
        }
        n++;
    }
    if((x > 505 && x < 555) && (y > 630 && y < 690))
    {
       // cout<<"\t\t\t\t\t+"<<endl;
        return '+';

    }
    else if((x>560 && x<610) && (y>630 && y<690))
    {
        return '-';
    }
    else if((x>615 && x<665) && (y>630 && y<690))
    {
        return '*';
    }
    else if((x>670 && x<720) && (y>630 && y<690))
    {
        return '/';
    }
    else if((x>725 && x<830) && (y>630 && y<690))
    {
        return 'd';
    }
    else if((x>835 && x<940) && (y>630 && y<690))
    {
        return 'e';
    }
    else
        return 'x';
}


void wrongInput(int no_of_guess)
{
    no_of_guess--;
    for(int i=7;i>=0;i--)
    {

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        rectangle(450+70*i,60+70*no_of_guess,510+70*i,120+70*no_of_guess);
        floodfill(451+70*i,71+70*no_of_guess,BLACK);

        Sleep(150);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,CYAN);
        rectangle(450+70*i,60+70*no_of_guess,510+70*i,120+70*no_of_guess);
        floodfill(451+70*i,71+70*no_of_guess,WHITE);

        Sleep(100);

    }
}
