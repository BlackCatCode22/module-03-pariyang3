#include <iostream>
using namespace std;


int main() {
int a = 3;
int *p;
p = &a;
cout << "address in pointer p: " << p << endl;
cout << "value of a using pointer p: " << *p << endl;
*p = 6;
cout << "new value of a: " << a << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *q = arr;
    for (int i = 0; i < 10; ++i) {
        cout << "Address of arr[" << i << "] " << (q + i) << endl;
        cout << "Value of arr[" << i << "]: " << *(q + i) << endl;
    }
    return 0;
}




