#include <iostream>
using namespace std;

// Variable declaration:
/*
A variable declaration is useful when you are using multiple files and you define your variable in one of the files which will be available at the time of linking of the program. You will use extern keyword to declare a variable at any place.Though you can declare a variable multiple times in your C++ program, but it can be defined only once in a file, a function or a block of code.
*/
extern int a, b;
extern int c;
extern float f;

int main () {
    // Variable definition:
    int a, b;
    int c;
    float f;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl ;

    f = 70.0/3.0;
    cout << f << endl ;

    return 0;
}
