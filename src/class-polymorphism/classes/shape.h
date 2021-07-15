#pragma once
namespace Demo
{
    class Shape
    {
        protected:
            int width;
            int height;
        public:
            Shape(int, int);
            virtual int area();
    };
}
