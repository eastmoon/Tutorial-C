#include "triangle.h" // header in local directory
#include <iostream> // header in standard library

using namespace Demo;
using namespace std;

Triangle::Triangle( int a = 0, int b = 0 ) : Shape(a, b) { }

int Triangle::area() {
    int result = (this->width * this->height) / 2;
    cout << "Triangle class area : " << result << endl;
    return result;
}
