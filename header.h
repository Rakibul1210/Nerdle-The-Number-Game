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
void wrongInput(int no_of_guess);

bool checkAnswer(int no_of_guess,char *equation, char *player_input);
void giveHint(int i,int j,colors color, char ch);

char *getInput();
char *getInputFromGamePage(int no_of_guess,int answer);

void gamePage(int answer);

