#include "lock.hpp"

    Lock::Lock(): mutexPtr(new mutex){
        mutexPtr->unlock();
    }

    Lock::~Lock(){ 
            unlock();
    }

    void Lock::lock(){
            mutexPtr->lock();
    }

    void Lock::unlock(){
            mutexPtr->unlock();
    }
