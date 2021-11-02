#include "order.hpp"

    order::order():id(0),orderList(){}
    order::order(const order &o){
                id=o.id;
                orderList=o.orderList;
            }
    void order::addPizza(pizza x)
            {
                orderList.insert(orderList.begin(),x);
            }
    void order::setOrderId(int orderId)
    {
            id=orderId;
    }
    void order::displayOrder()
            {
                cout<<"+----------------------ORDER "<<id<<"--------------------------+"<<endl<<endl;
                std::list<pizza>::iterator it;
                int pret=0;
                for(it=orderList.begin();it!=orderList.end();++it)
                {
                    it->display();
                    pret=pret+it->pret;
                }
                cout<<"Pret comanda: "<<pret<<"lei"<<endl; 
                cout<<"+-------------------------------------------------------+"<<endl;
            }