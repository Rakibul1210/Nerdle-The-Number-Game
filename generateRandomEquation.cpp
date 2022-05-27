#include "header.h"

using namespace std;

/*
char* generateRandomEquation(){

    char *equation= new char[1];

    ifstream input_file;
    input_file.open("Equation.txt");

    if(input_file.is_open()){
        input_file>>equation;
    }


    return equation;

}*/

char* generateRandomEquation(int rnd_num){
    char *equation= new char[1];
    int random_number,random_operator;
    int i=0;
    //srand(rnd_num);
    //srand(time(NULL));

    while(true)
    {
        if(i <= 6){
            random_number = rand() % 19 +1;
        }
        else
            random_number = rand() % 9+1;

        if(random_number >= 10){
            equation[i+1] =  '0' + random_number%10;
            random_number = random_number/10;
            equation[i] = '0' + random_number%10;
            i = i + 2;
        }
        else{
            equation[i] = '0' + random_number % 10;
            i= i + 1;
        }

        //operator.....
        if(i <= 6){
        random_operator = rand() % 4;
        if(random_operator  == 0)
            equation[i++] = '+';
        else if(random_operator == 1)
            equation[i++] = '-';
        else if(random_operator == 2)
            equation[i++] = '*';

//        else if(random_operator == 3){
//            equation[i++] = '/';
//        }
        }
        if(i >= 8)
            break;

    }
    equation[i] = '\0';

    return equation;

}
