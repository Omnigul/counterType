#include <iostream>
#include "counterType.h"
#include "counterType.cpp"
using namespace std;


int main()
{
    counterType test;
    test.setCounter();
    test.test();
    test.getCounter();
    test.test();
    test.incrementCounter();
    test.test();
    test.decrementCounter();
    test.test();
    test.resetCounter();
    test.test();
    test.decrementCounter();
    test.setCounter(10);
}


