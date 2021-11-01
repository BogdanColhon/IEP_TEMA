#include<iostream>
using namespace std;
class pizza {
    string denumire;
    int cod;
public:
    pizza():denumire("Pizza"),cod(0){}
    pizza(const pizza& p){
        denumire=p.denumire;
        cod=p.cod;}
    pizza(string d,int c){
        denumire=d;
        cod=c;}
    void display(){
        cout<<"nume= "<<denumire<<endl;
        cout<<"cod= "<<cod<<endl;
    }   
};
