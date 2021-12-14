   #include<iostream>
   #include <list>
   #include "pizza.hpp"
   #include<mutex>
   using namespace std;
   class order
    {
        private:
            int id;
            list<pizza>orderList;
            pizza pizza_basic;
        public:
            order();
            order(int orderId,list<pizza> orderList);
            order(const order &o);
            void addPizza(pizza x);
            void setOrderId(int orderId);
            void displayOrder();
            void deliverOrder(mutex mtx);
            order& operator=(const order& obj1);
    };
