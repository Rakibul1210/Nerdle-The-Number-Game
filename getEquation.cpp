
#include "header.h"


char* getValidEquation()
{
    int answer;
    char *equation;
    int rnd_num;
    srand(time(NULL));
    rnd_num = rand();

    do{
        equation = generateRandomEquation(rnd_num+rand());
        //cout<<equation<<endl;
        answer = calculateValue( infixToPostfix( equation ) );
        //cout<<"answer: "<<answer<<endl;
    }while(answer < 0 || answer > 100);


    return equation;
}
