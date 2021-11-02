#include<iostream>
#include "pizzerie.hpp"
#include "order.hpp"

int main(){
    pizzerie *p=p->getInstance();//default constructor
    cout<<p->getName()<<endl;
    p->setName("Pizzeria Thalia");
    cout<<p->getName()<<endl;
    pizza sortiment_pizza_1;//default constructor
    sortiment_pizza_1.bakePizza("Salami",1,700,23);
    //sortiment_pizza_1.display();

    pizza sortiment_pizza_2;//default constructor
    pizza sortiment_pizza_3=sortiment_pizza_2; //copy-constructor
    sortiment_pizza_3.display();
    sortiment_pizza_2.bakePizza("Rusticana",2,900,27);
    sortiment_pizza_3.bakePizza("Tonno",3,700,25);
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
    order1.addPizza(sortiment_pizza_2);
    order1.addPizza(sortiment_pizza_2);
    order1.displayOrder();
    
    order order2=order1; //copy constructor
    order2.setOrderId(1);
    order2.addPizza(sortiment_pizza_1);
    order2.displayOrder();
    
    return 0;
}