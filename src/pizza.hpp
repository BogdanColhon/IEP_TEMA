#pragma once
#include<iostream>
using namespace std;
class pizza {
    ~pizza();//disallow
    string denumire;
    int cod;
    int grame;
public:
    int pret;
    pizza();
    pizza(const pizza& p);
    pizza(string d,int c,int g, int p);
    void display();
    int operator+(pizza obj1);  
};