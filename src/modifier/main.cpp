#include <iostream>
using namespace std;

int main() {
    cout << ">> Constants/Literals : \n";
    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    cout << " \n";
    cout << ">> Modifier Types : \n";
    /* This program shows the difference between
     * signed and unsigned integers.
     */
    short int i;           // a signed short integer
    short unsigned int j;  // an unsigned short integer

    j = 50000;

    i = j;
    cout << i << " " << j;
    return 0;
}
