#include "classes/shape.h"
#include "classes/rectangle.h"
#include "classes/triangle.h"

using namespace Demo;

int main()
{
    // Declare variable
    Shape* shape;
    Shape sh(1, 2);
    Triangle tri(3, 4);
    Rectangle rec(5, 6);

    // Point to shape
    shape = &sh;
    shape->area();

    // Point to triangle
    shape = &tri;
    shape->area();

    // Point to Rectangle
    shape = &rec;
    shape->area();

    return 0;
}
