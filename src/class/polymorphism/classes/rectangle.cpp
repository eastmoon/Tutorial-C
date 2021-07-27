#include "rectangle.h" // header in local directory
#include <iostream> // header in standard library

using namespace Demo;
using namespace std;

Rectangle::Rectangle( int a = 0, int b = 0) : Shape(a, b) { }

int Rectangle::area () {
    int result = (this->width * this->height);
    cout << "Rectangle class area :" << result << endl;
    return result;
}
