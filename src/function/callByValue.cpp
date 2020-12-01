// C++ program to swap two numbers using
// pass by pointer.
#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

//
void callByValue()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value.
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;
}

// function returning the max between two numbers
int max(int num1, int num2) {
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
