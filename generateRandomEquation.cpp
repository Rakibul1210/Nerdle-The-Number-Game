#include <bits/stdc++.h>

using namespace std;

char* generateRandomEquation(){
    char *equation= new char[1];
    freopen("Equation.txt","r", stdin);
    gets(equation);
    //cin>>equation;
    cout<<equation<<endl;
    //exit(1);
    return equation;


}
