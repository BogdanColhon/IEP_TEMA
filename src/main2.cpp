#include<iostream>
#include "pizzerie.hpp"
#include "order.hpp"

int main(){
    pizzerie *p=p->getInstance();
    //cout<<p->getData()<<endl;
    p->setData("Pizzeria Thalia");
    cout<<p->getData()<<endl;
    pizza sortiment_pizza_1("Salami",1,700,23);
    //sortiment_pizza_1.display();
    pizza sortiment_pizza_2("Rusticana",2,900,27);
    pizza sortiment_pizza_3("Tonno",3,700,25);
    //pizza2.display();
    p->addPizzaInMenu(sortiment_pizza_1);
    p->addPizzaInMenu(sortiment_pizza_2);
    p->addPizzaInMenu(sortiment_pizza_3);
    
    p->displayPizzaMenu();
    int suma=0;
    suma=sortiment_pizza_1+sortiment_pizza_2;
    cout<<endl<<"Suma= "<<suma<<endl<<endl;
    order order1; //default constructor 
    order1.displayOrder();
    return 0;
}