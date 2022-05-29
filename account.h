#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

struct Player{
    string name;
    string password;

    //int matchPlayed;
    //nt matchWon;
    //double winPercentage;
};






Player loginMenu(Player Player);
Player login(Player player);
Player singIn(Player player);

//console graphics...
void gotoxy(int x, int y);
void Upper_angel();
void Lower_angel(int zoto_tuku_nice);
