#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Larger integer: " << larger(10, 20) << endl;
    cout << "Larger float: " << larger(4.5, 7.2) << endl;
    cout << "Larger value: " << larger(30.5, 20.5) << endl;

    return 0;
}