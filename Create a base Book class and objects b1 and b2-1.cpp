#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int id;
};

int main() {
    Book b1, b2;

    b1.title = "C++";
    b1.id = 101;

    b2.title = "Python";
    b2.id = 102;

    cout << b1.title << " " << b1.id << endl;
    cout << b2.title << " " << b2.id;
}