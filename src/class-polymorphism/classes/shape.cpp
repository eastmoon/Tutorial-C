#include "shape.h" // header in local directory
#include <iostream> // header in standard library

using namespace Demo;
using namespace std;

Shape::Shape( int a = 0, int b = 0 ) : width(a), height(b) {}

int Shape::area()
{
    cout << "Parent class area : 0" <<endl;
    return 0;
}
