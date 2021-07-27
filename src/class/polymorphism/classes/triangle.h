#pragma once
#include "shape.h"

namespace Demo
{
    class Triangle: public Shape
    {
       public:
          Triangle(int, int);
          int area();
    };
}
