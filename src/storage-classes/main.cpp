#include <iostream>
using namespace std;

// Static
void func(void);
static int count = 10;

// Extern
int externCount;
extern void write_extern();

int main() {
    cout << ">> Static storage class : \n";
    while(count--) {
        func();
    }

    cout << "\n";
    cout << ">> Extern storage class : \n";
    externCount = 5;
    write_extern();
    return 0;
}

// Function definition
void func( void ) {
    static int i = 5; // local static variable
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}
