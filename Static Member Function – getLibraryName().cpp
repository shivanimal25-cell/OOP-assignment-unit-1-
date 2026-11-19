#include <iostream>
using namespace std;

class Book {
public:
    static void getLibraryName() {
        cout << "City Central Library";
    }
};

int main() {
    Book::getLibraryName();
}