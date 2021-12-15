#include "pizza.hpp"

    pizza::pizza():denumire("Pizza"),cod(0),grame(0),pret(0),ambalat(0){}
    pizza::pizza(string _denumire,int _cod,int _grame,int _pret,int _ambalat):denumire(_denumire),cod(_cod),grame(_grame),pret(_pret),ambalat(_ambalat){//cout<<"Pizza created"+denumire<<endl;
    }
    pizza::pizza(const pizza& p){
        denumire=p.denumire;
        cod=p.cod;
        grame=p.grame;
        pret=p.pret;
        ambalat=p.ambalat;
        }
    pizza::~pizza()
    {
        //cout<<"Pizza destroyed"+denumire<<endl;
    }
    void pizza::bakePizza(string d,int c,int g, int p,int a){
        denumire=d;
        cod=c;
        grame=g;
        pret=p;
        ambalat=a;
        }
    void pizza::packaged(){
        ambalat=1;
        cout<<endl<<"---------------------------------------->>>> Pizza urmatoare a fost ambalata: ";
    }
    void pizza::display(){
        cout<<"nume="<<denumire;
        cout<<" | cod="<<cod;
        cout<<" | grame="<<grame;
        cout<<" | pret="<<pret<<" lei";
        cout<<" | ambalata="<<ambalat<<endl;

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

    pizza& pizza::operator=(const pizza& obj2){
        if(this==&obj2)
        {
         cout<<"Self assignment!"<<endl;
         return *this;
        } 
        else
        {
        denumire=obj2.denumire;
        cod=obj2.cod;
        grame=obj2.grame;
        pret=obj2.pret;
        return *this;
        }
        
    }
    
    meniupizza::meniupizza():denumire_bautura("suc_generic"),ml(0){}
    meniupizza::meniupizza(string _denumire_bautura,int _ml):denumire_bautura(_denumire_bautura),ml(_ml){}
    meniupizza::meniupizza(const meniupizza& mp):pizza(mp),denumire_bautura(mp.denumire_bautura),ml(mp.ml){}
    void meniupizza::display()
    {
        cout<<"nume="<<getDenumire();
        cout<<" | cod="<<getCod();
        cout<<" | grame="<<getGrame();
        cout<<" | pret="<<getPret()<<" lei";
        cout<<" | bautura="<<denumire_bautura;
        cout<<" | ml="<<ml<<endl;
    }
    meniupizza& meniupizza::operator=(const meniupizza& mp){
        if(this==&mp)
        {
            cout<<"Self assignment!"<<endl;
            return *this;
        }
        else{
        pizza::operator=(mp);
        denumire_bautura=mp.denumire_bautura;
        ml=mp.ml;
        return *this;
        }
    }


