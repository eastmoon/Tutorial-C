#pragma once
#include "shape.h"

namespace Demo
{
    class Rectangle: public Shape {
        public:
          Rectangle( int, int );
          int area ();
    };
}
