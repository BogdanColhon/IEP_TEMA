#include<iostream>
using namespace std;
class pizza {
    int cod;
public:
    pizza():cod(0){}
    pizza(const pizza& p){cod=p.cod;}
    pizza(int c){cod=c;}
    void display(){
        cout<<"cod="<<cod<<endl;
    }   
};

int main()
{
    pizza margherita(3);
    cout<<"----------------------PIZZA-----------------------"<<endl;
    margherita.display();

}