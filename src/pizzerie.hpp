#include<iostream>
#include<string>
#include "pizza.hpp"
#include<list>
using namespace std;

   class pizzerie
    {
    private:
        string nume;
        list<pizza>menu;
        static pizzerie *instance;
        pizzerie();

    public:
    static pizzerie *getInstance();
    string getData();
    void setData(string nume);
    void addPizzaInMenu(pizza x);
    void displayPizzaMenu();
};