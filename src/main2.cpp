#include<iostream>
#include "pizzerie.hpp"
int main(){
    pizzerie *p=p->getInstance();
    cout<<p->getData()<<endl;
    p->setData("Pizzeria Thalia");
    cout<<p->getData()<<endl;
    return 0;
}