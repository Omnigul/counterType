#pragma once

using namespace std;

class counterType
{
public:
    void setCounter(int num);
    void getCounter();
    void incrementCounter();
    void decrementCounter();
    void test();
    void resetCounter();
private:
    int tally;
};

