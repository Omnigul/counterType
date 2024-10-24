#include <iostream>
#include "counterType.h"
#include "counterType.cpp"
using namespace std;


int main()
{
    counterType test;
    test.resetCounter();
    test.test();
    test.getCounter();
    test.test();
    test.incrementCounter();
    test.test();
    test.decrementCounter();
    test.test();
}
