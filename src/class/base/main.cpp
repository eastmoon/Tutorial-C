#include "my_class.h"

using namespace N;

int main()
{
    // Declare class variable
    my_class mc;
    mc.do_something();
    // Declare class point, and new class assign to point.
    my_class* mcp = new my_class();
    mcp->do_something();
    return 0;
}
