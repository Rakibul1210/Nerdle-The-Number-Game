#pragma once
#include <bits/stdc++.h>
#include <fstream>
#include <graphics.h>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

char* getValidEquation();
char* generateRandomEquation(int rnd_num);
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
char *numToString(int num);

char checkMouseClick(int x,int y);


bool checkAnswer(char *equation, char *player_input);
char *getInput();
char *getInputFromGamePage();

void gamePage(int answer);

