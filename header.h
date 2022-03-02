#include <bits/stdc++.h>
#include <fstream>
using namespace std;

#pragma once

char* generateRandomEquation();

char* infixToPostfix(char* infix);
int checkPrecendence(char ch);
int calculateValue(char* equation);



// My stack functions
void pushStack(int n);
int popStack();
void pushStack(char ch);
char popSack();

// Additional Functions
int stringLength(char* str);
bool isNumber(char ch);
void temp();

char *getInput();
