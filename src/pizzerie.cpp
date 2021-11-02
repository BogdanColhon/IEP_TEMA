#include<iostream>
#include<string>
#include "pizzerie.hpp"
#include<list>
using namespace std;

    pizzerie::pizzerie(){}
    pizzerie* pizzerie::getInstance(){
            if(!instance)
            instance=new pizzerie;
            return instance;
        }

    string pizzerie::getData(){
        return this->nume;
    }

    void pizzerie::setData(string nume){
        this->nume=nume;
    }
    void pizzerie::addPizzaInMenu(pizza x)
    {
        menu.insert(menu.begin(),x);
    }
    void pizzerie::displayPizzaMenu()
    {
       cout<<"----------------------PIZZA MENU-----------------------"<<endl<<endl;
       std::list<pizza>::iterator it;
       for(it=menu.begin();it!=menu.end();++it)
       {
           it->display();
       }
       cout<<"-------------------------------------------------";
    }
    pizzerie* pizzerie::instance=NULL;