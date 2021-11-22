#include "pizza.hpp"

    pizza::pizza():denumire("Pizza"),cod(0),grame(0),pret(0){}
    pizza::pizza(string _denumire,int _cod,int _grame,int _pret):denumire(_denumire),cod(_cod),grame(_grame),pret(_pret){}
    pizza::pizza(const pizza& p){
        denumire=p.denumire;
        cod=p.cod;
        grame=p.grame;
        pret=p.pret;
        }
    void pizza::bakePizza(string d,int c,int g, int p){
        denumire=d;
        cod=c;
        grame=g;
        pret=p;
        }
    void pizza::display(){
        cout<<"nume="<<denumire;
        cout<<" | cod="<<cod;
        cout<<" | grame="<<grame;
        cout<<" | pret="<<pret<<" lei"<<endl;

    } 
    int pizza::operator+(pizza obj1)
    {
        pizza temp;
        temp.pret=pret+obj1.pret;
        return temp.pret;
    }

    pizza pizza::operator=(const pizza& obj2){
           return *this;
        
    }
