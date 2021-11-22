   #include<iostream>
   #include <list>
   #include "pizza.hpp"
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
            order operator=(const order& obj1);
    };
