#ifndef PIZZERIE_HPP
#define PIZZERIE_HPP
#include<iostream>
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
    };

#endif