#include <iostream>

extern int externCount;

void write_extern(void) {
    std::cout << "Count is " << externCount << std::endl;
}
