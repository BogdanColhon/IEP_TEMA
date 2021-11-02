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
            order(const order &o);
            order();
            void addPizza(pizza x);
            void displayOrder();
    };
