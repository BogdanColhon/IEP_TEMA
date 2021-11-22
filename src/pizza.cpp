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
    string pizza::getDenumire(){
        return denumire;
    }
    int pizza::getCod(){
        return cod;
    }
    int pizza::getGrame(){
        return grame;
    }
    int pizza::getPret(){
        return pret;
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
    
    meniupizza::meniupizza():denumire_suc("suc_generic"),ml(0){}
    meniupizza::meniupizza(string _denumire_suc,int _ml):denumire_suc(_denumire_suc),ml(_ml){}
    meniupizza::meniupizza(const meniupizza& mp):pizza(mp),denumire_suc(mp.denumire_suc),ml(mp.ml){}
    void meniupizza::display()
    {
        cout<<"nume="<<getDenumire();
        cout<<" | cod="<<getCod();
        cout<<" | grame="<<getGrame();
        cout<<" | pret="<<getPret()<<" lei";
        cout<<" | suc="<<denumire_suc;
        cout<<" | ml="<<ml<<endl;
    }
    meniupizza meniupizza::operator=(const meniupizza& mp){
        pizza::operator=(mp);
        denumire_suc=mp.denumire_suc;
        ml=mp.ml;
        return *this;
    }


