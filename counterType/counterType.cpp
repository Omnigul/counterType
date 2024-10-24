// Define a class called counterType to implement a counter. Your class must have a private data member counter of type int
// and functions to set counter to the value specified by the user, initialize counter to 0, retrieve the value of counter,
// and increment and decrement counter by one. The value of counter must be nonnegative.


#include <iostream>
#include "counterType.h"

using namespace std;

void counterType::setCounter(int num)
{
    tally = num;
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
    if (tally > 0)
        tally--;
    else
    {
        tally = 0;
        cout << "can't go lower than zero!" << endl;
    }
        

}

void counterType::resetCounter()
{
    tally = 0;
}

void counterType::test()
{
    cout << tally << endl;
}
