#include <iostream>

using namespace std;



int main()
{
    int* ptr = new int;

    int n = 23;

    int size;
    cout << "input size of array: ";
    cin >> size;

    int* array = new int[size];

    delete[] array;

    array = new int[size * 2];

    float x = 10;
    float* fptr = &x;
    int* iptr;
    void* vptr = fptr;
    iptr = (int*)vptr;

    cout << *iptr << "\n";
}
