#include <iostream>
using namespace std;

class Book {
public:
    string title;

    Book(string title) {
        this->title = title;
    }
};

int main() {
    Book b1("C++ Programming");

    cout << b1.title;
}