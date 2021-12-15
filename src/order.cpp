#include "order.hpp"

    order::order():id(0),orderList(){}
    order::order(int _id,list<pizza> _orderList):id(_id),orderList(_orderList){}
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

    void order::deliverOrder()
    {
        list<pizza>::iterator it;
        for (it = orderList.begin(); it != orderList.end(); ++it){
            if(it->ambalat == 0)
                cout <<"Comanda nu se poate livra, pizza nu este ambalata";
}
       
    }
    order& order::operator=(const order& obj1){
        if(this==&obj1)
        {
         cout<<"Self assignment!";
         return *this;
        } 
        else
        {
            id=obj1.id;
            orderList=obj1.orderList;
            return *this;
        }

    }