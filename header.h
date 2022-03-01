#include <bits/stdc++.h>

using namespace std;

#pragma once

char* generateRandomEquation();

void infixToPostfix(char* infix,char *postfix);
int checkPrecendence(char ch);
int calcultaeEquation(char* equation);



// My stack functions
void pushStack(int n);
int popStack();
void pushStack(char ch);
char popSack();

// Additional Functions
int stringLength(char* str);
bool isNumber(char ch);
void temp();
