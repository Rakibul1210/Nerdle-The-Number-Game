#include "header.h"

using namespace std;

char* generateRandomEquation(){
    char *equation= new char[1];

    ifstream input_file;
    input_file.open("Equation.txt");

    if(input_file.is_open()){
        input_file>>equation;
    }
    //fgets(equation);

    //cout<<equation<<endl;

    return equation;


}
