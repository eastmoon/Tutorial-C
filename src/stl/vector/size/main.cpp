
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void show (int* i) {  // function:
    if ( i == nullptr ) {
        std::cout << "NULL ";
    } else {
        std::cout << *i << " ";
    }
}
void show_vector( vector<int*>* v ) {
    cout << "Size : " << v->size() << endl;
    cout << "Capacity : " << v->capacity() << endl;
    for_each(v->begin(), v->end(), show);
    cout << endl;
}

int main()
{
    // Declare empty point vector
    cout << "Show V1 vector" << endl;
    vector<int*> v1(10);
    show_vector(&v1);
    // Assign value to vector
    int a = 1, b = 2, c = 3;
    v1[0] = &a;
    v1[4] = &b;
    v1[9] = &c;
    show_vector(&v1);
    // Re-capacity
    v1.reserve(20);
    show_vector(&v1);
    // Re-size
    v1.resize(5);
    show_vector(&v1);
    // Re-size
    v1.resize(20);
    show_vector(&v1);
    return 0;
}
