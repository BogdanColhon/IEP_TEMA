#include<iostream>
#include "pizzerie.hpp"
#include "order.hpp"
#include "lock.hpp"
#include <memory>
#include <vector>
#include <mutex>
#include <thread> 
//mutex mtx;
Lock lMutex;
void packagePizza (shared_ptr<pizza> p)
{

    lMutex.lock();
    shared_ptr <pizza> shared_pizza = p;
    p->packaged();
    p->display();
    lMutex.unlock();
}
int main(){
/*
    vector<shared_ptr<pizza>> pizzaList {
  make_shared<pizza>("Salami",1,700,23),
  make_shared<pizza>("Rusticana",2,900,27),
  make_shared<pizza>("Tonno",3,700,25)
};*/
   
    list<pizza> lista;
    //shared pointers pentru sortimentele de pizza, memoria poate sa se elibereze abia dupa ce toti pointerii care indica spre un sortiment sunt stersi
    shared_ptr <pizza> pizza1_sptr=make_shared<pizza>("Salami",1,700,23,0);
    shared_ptr <pizza> pizza2_sptr=make_shared<pizza>("Rusticana",2,900,27,0);
    shared_ptr <pizza> pizza3_sptr=make_shared<pizza>("Tonno",3,700,25,0);

 
    
    //unique pointer pentru comanda, daca un alt pointer indica catre aceeasi comanda, in cazul in care se sterge primul pointer, memoria se elibereaza.
    unique_ptr <order> order1_sptr=make_unique<order>(1,lista);
    
    //o pizza de la o comanda poate pointa catre locatia unde pointeaza si un shared pointer de sortiment de pizza
    {
    shared_ptr <pizza> order1_pizza1_sptr = pizza2_sptr;
    shared_ptr <pizza> order1_pizza2_sptr = pizza3_sptr;
    
    order1_pizza1_sptr->display();

    thread t1(packagePizza,order1_pizza1_sptr);
    thread t2(packagePizza,order1_pizza2_sptr);
    t1.join();
    t2.join();


    cout<<"or 1"<<endl<<endl;
    cout<<"Counter-ul de referinte este incrementat pentru sortimentele 2 si 3"<<endl;
    cout<<pizza1_sptr.use_count()<<endl;
    cout<<pizza2_sptr.use_count()<<endl;
    cout<<pizza3_sptr.use_count()<<endl;
    
    order1_sptr->addPizza(*order1_pizza1_sptr.get());
    order1_sptr->addPizza(*order1_pizza2_sptr.get());
    }
    order1_sptr->displayOrder();
    
    unique_ptr <order> order2_sptr=make_unique<order>(2,lista);
    {
    shared_ptr <pizza> order2_pizza1_sptr = pizza1_sptr;
    
    thread t3(packagePizza,order2_pizza1_sptr);
    t3.join();

    cout<<endl<<"or 2"<<endl<<endl;
    cout<<"Counter-ul de referinte este incrementat pentru sortimentele 1. Pentru sortimentele 2 si 3 s-au sters pointerii de mai sus dar memoria nu s-a eliberat deoarece inca au cate un pointer catre obiect"<<endl;
    cout<<pizza1_sptr.use_count()<<endl;
    cout<<pizza2_sptr.use_count()<<endl;
    cout<<pizza3_sptr.use_count()<<endl;
    
    order2_sptr->addPizza(*order2_pizza1_sptr.get());
    }
    order2_sptr->displayOrder();
    order2_sptr->deliverOrder();


    //(static_pointer_cast<pizza>(pizza1_sptr))->display();

    
    /*

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
*/
    return 0;
}