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
    suma=sortiment_pizza_1+sortiment_pizza_2; //operator redefinit
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

    cout<<endl<<endl<<"Tema 2"<<endl<<endl;
    pizza pizza4("Pizza Omletta",4,800,24);
    pizza pizza5("Pizza Zero",5,0,10);
    pizza pizza6("Pizza Pui",6,1000,30);
    pizza4.display();
    cout<<"ma astept la pizza omletta^"<<endl;
    pizza4=pizza5=pizza6;
    pizza4.display();
    cout<<"ma astept la pizza pui^"<<endl;

    pizza4=pizza4;
    pizza4.display();
    cout<<"ma astept la self assignment^"<<endl;
    
    meniupizza menp1("cola",330);
    menp1.bakePizza("Rusticana",2,900,27);
    //menp1.display();
    meniupizza menp2=menp1;//copy constructor
    //menp2.display();
    meniupizza menp3("sprite",500);
    menp3.bakePizza("Pizza Omletta",4,800,24);
    meniupizza menp4("apa",1000);
    menp4.bakePizza("Pizza Pui",6,1000,30);
    menp4.display();
    cout<<"ma astept la pizza pui cu apa^"<<endl;
    menp4=menp1=menp3;
    menp4.display();
     cout<<"ma astept la pizza omletta cu sprite^"<<endl;

    return 0;
}