#include<iostream>
#include <mutex>
#include <memory>
using namespace std;

class Lock {
public:

    Lock();
    ~Lock();
    void lock();
    void unlock();

private:
    Lock(const Lock&) =  delete;
    Lock& operator=(const Lock&) = delete;
    shared_ptr<mutex> mutexPtr;
};