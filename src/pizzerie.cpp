#include<iostream>
#include<string>
#include "pizzerie.hpp"
#include<list>
using namespace std;

    pizzerie::pizzerie():nume("PIZZERIE GENERICA"),menu(){}
    pizzerie* pizzerie::getInstance(){
            if(!instance)
            instance=new pizzerie;
            return instance;
        }

    string pizzerie::getName(){
        return this->nume;
    }

    void pizzerie::setName(string nume){
        this->nume=nume;
    }
    void pizzerie::addPizzaInMenu(pizza x)
    {
        menu.insert(menu.begin(),x);
    }
    void pizzerie::displayPizzaMenu()
    {
       cout<<"+----------------------PIZZA MENU-----------------------+"<<endl<<endl;
       std::list<pizza>::iterator it;
       for(it=menu.begin();it!=menu.end();++it)
       {
           it->display();
       }
       cout<<"+-------------------------------------------------------+"<<endl;
    }
    pizzerie* pizzerie::instance=NULL;