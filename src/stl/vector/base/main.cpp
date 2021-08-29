#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void show (int i) {  // function:
  std::cout << i << " ";
}
void show_vector( vector<int>* v ) {
    for_each(v->begin(), v->end(), show);
    cout << endl;
}

int main()
{
    // Declare empty vector, and fill the array with 10 five times
    cout << "Show V1 vector" << endl;
    vector<int> v1;
    v1.assign(5, 10);
    show_vector(&v1);

    // Declare vector, and fill the array at constructor
    cout << "Show V2 vector" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
    show_vector(&v2);

    // Declare empty vector, and push data, show with difference iterator
    vector<int> v3;
    for (int i = 1; i <= 5; i++)
        v3.push_back(i);

    cout << "Output v3 of begin and end: ";
    for_each(v3.begin(), v3.end(), show);
    cout << endl;

    cout << "Output v3 of rbegin and rend: ";
    for_each(v3.rbegin(), v3.rend(), show);
    cout << endl;
    
    return 0;
}
