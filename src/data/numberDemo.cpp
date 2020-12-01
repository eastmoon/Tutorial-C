#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void numberDemo() {
    // number definition:
    short  s;
    int    i;
    long   l;
    float  f;
    double d;

    // number assignments;
    s = 10;
    i = 1000;
    l = 1000000;
    f = 230.47;
    d = 30949.374;

    // number printing;
    cout << "short  s :" << s << endl;
    cout << "int    i :" << i << endl;
    cout << "long   l :" << l << endl;
    cout << "float  f :" << f << endl;
    cout << "double d :" << d << endl;

    // mathematical operations;
    cout << "\n";
    cout << "sin(d)\t\t:" << sin(d) << endl;
    cout << "abs(i)\t\t:" << abs(i) << endl;
    cout << "floor(d)\t:" << floor(d) << endl;
    cout << "sqrt(f)\t\t:" << sqrt(f) << endl;
    cout << "pow( d, 2)\t:" << pow(d, 2) << endl;

    // set the seed
    srand( (unsigned)time( NULL ) );

    /* generate 10  random numbers. */
    cout << "\n";
    int x, y;
    for( x = 0; x < 10; x++ ) {
        // generate actual random number
        y = rand();
        cout << "Random Number : " << y << endl;
    }
}
