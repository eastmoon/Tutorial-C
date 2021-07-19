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
    vector<int> v1;
    v1.assign(5, 10);
    show_vector(&v1);

    // Declare vector, and fill the array at constructor
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
    show_vector(&v2);

    return 0;
}
