// Define a class called counterType to implement a counter. Your class must have a private data member counter of type int
// and functions to set counter to the value specified by the user, initialize counter to 0, retrieve the value of counter,
// and increment and decrement counter by one. The value of counter must be nonnegative.


#include <iostream>

using namespace std;

class counterType
{
public:
    void resetCounter();
    void getCounter();
    void incrementCounter();
    void decrementCounter();
    void test();
private:
    int tally;
};

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

void counterType::resetCounter()
{
    tally = 0;
}

void counterType::getCounter()
{
    cout << "choose a positive number" << endl;
    cin >> tally;
    if (tally < 0)
    {
        cout << "please enter a positive number" << endl;
        cin >> tally;
    }
}

void counterType::incrementCounter()
{
    tally++;
}

void counterType::decrementCounter()
{
    tally--;
}

void counterType::test()
{
    cout << tally << endl;
}