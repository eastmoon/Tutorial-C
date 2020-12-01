#include <iostream>
using namespace std;

extern void callByValue();
extern void callByPointer();
extern void callByReference();

int main()
{
    cout << ">> Call by Value : \n";
    callByValue();

    cout << "\n";
    cout << ">> Call by Pointer : \n";
    callByPointer();

    cout << "\n";
    cout << ">> Call by Reference : \n";
    callByReference();
}
