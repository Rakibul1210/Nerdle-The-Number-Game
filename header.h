#pragma once
#include <bits/stdc++.h>
#include <fstream>
#include <graphics.h>
#include <string>
#include <stdlib.h>
#include <time.h>

#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool startGame();


char* getValidEquation();
char* generateRandomEquation(int rnd_num);
char* infixToPostfix(char* infix);
int checkPrecendence(char ch);
int calculateValue(char* equation);
bool validEquation(char *equation);


// My stack function
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

//graphics...
void gamePage(int answer, bool game_won);
bool getChoice();
bool gameEnded(bool game_won, char *equation);
int chooseDifficulty();
int getDifficulty();


