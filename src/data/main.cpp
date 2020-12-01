#include <iostream>
using namespace std;

extern void numberDemo();
extern void arrayDemo();
extern void stringDemo();

int main()
{
    cout << ">> Number : \n";
    numberDemo();

    cout << "\n";
    cout << ">> Array : \n";
    arrayDemo();

    cout << "\n";
    cout << ">> String : \n";
    stringDemo();
}
