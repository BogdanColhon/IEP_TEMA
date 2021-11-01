#ifndef PIZZERIE_HPP
#define PIZZERIE_HPP
#include<iostream>
#include<string>
#include "pizza.cpp"
#include<list>
using namespace std;
   class pizzerie
    {
    private:
        string nume;
        static pizzerie *instance;
        pizzerie(){
        nume="PIZZERIE GENERICA";
    }

    public:
        static pizzerie *getInstance(){
            if(!instance)
            instance=new pizzerie;
            return instance;
        }

    string getData(){
        return this->nume;
    }

    void setData(string nume){
        this->nume=nume;
    }
    void addPizza(pizza x);
};
    pizzerie* pizzerie::instance=NULL;
#endif