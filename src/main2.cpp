#include<iostream>
#include "pizzerie.cpp"
#include "pizzerie.hpp"
#include "pizza.cpp"

int main(){
    pizzerie *p=p->getInstance();
    cout<<p->getData()<<endl;
    p->setData("Pizzeria Thalia");
    cout<<p->getData()<<endl;
    pizza pizza1("Margherita",1);
    cout<<"----------------------PIZZA-----------------------"<<endl;
    pizza1.display();
    pizza pizza2=pizza1;
    pizza2.display();
    return 0;
}