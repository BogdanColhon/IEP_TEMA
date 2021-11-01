#include<iostream>
#include<string>

#include<list>
using namespace std;
   class pizza {
    string denumire;
    int cod;
    int grame;
public:
    int pret;
    pizza():denumire("Pizza"),cod(0),grame(0),pret(0){}
    pizza(const pizza& p){
        denumire=p.denumire;
        cod=p.cod;
        grame=p.grame;
        pret=p.pret;
        }
    pizza(string d,int c,int g, int p){
        denumire=d;
        cod=c;
        grame=g;
        pret=p;
        }
    void display(){
        cout<<"nume="<<denumire;
        cout<<" | cod="<<cod;
        cout<<" | grame="<<grame;
        cout<<" | pret="<<pret<<" lei"<<endl;

    } 
    int operator+(pizza obj1);  
};
    int pizza::operator+(pizza obj1)
    {
        pizza temp;
        temp.pret=pret+obj1.pret;
        return temp.pret;
    }
   class pizzerie
    {
    private:
        string nume;
        list<pizza>lista;
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
    void addPizza(pizza x)
    {
        lista.insert(lista.begin(),x);
    }
    void displayPizzaMenu()
    {
       cout<<"----------------------PIZZA MENU-----------------------"<<endl<<endl;
       std::list<pizza>::iterator it;
       for(it=lista.begin();it!=lista.end();++it)
       {
           it->display();
       }
    }
    void comanda(list<pizza> lista);
};
    pizzerie* pizzerie::instance=NULL;


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
    p->addPizza(sortiment_pizza_1);
    p->addPizza(sortiment_pizza_2);
    p->addPizza(sortiment_pizza_3);
    
    p->displayPizzaMenu();
    int pret_comanda=0;
    pret_comanda=sortiment_pizza_1+sortiment_pizza_2;
    cout<<endl<<"Pretul comenzii= "<<pret_comanda;
    return 0;
}