#include<iostream>
using namespace std;
class pizzerie {
    string nume;
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
};

int main(){
    pizzerie *p->instance=nullptr;
    pizzerie *p=p->getInstance();
    cout<<p->getData()<<endl;
    p->setData("Pizzeria Thalia");
    cout<<p->getData()<<endl;
    return 0;
}