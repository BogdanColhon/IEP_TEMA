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
        ~pizzerie(); //disallow destructor by making it private

    public:
    static pizzerie *getInstance();
    string getName();
    void setName(string nume);
    void addPizzaInMenu(pizza x);
    void displayPizzaMenu();
};