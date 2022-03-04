#include <bits/stdc++.h>
#include <fstream>
#include <graphics.h>

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


bool checkAnswer(char *equation, char *player_input);
char *getInput();
