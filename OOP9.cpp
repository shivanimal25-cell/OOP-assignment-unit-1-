#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    int seats;

    void display() {
        show();
        cout << "Seats: " << seats << endl;
    }
};

class Bike : public Vehicle {
public:
    int cc;

    void display() {
        show();
        cout << "CC: " << cc << endl;
    }
};

int main() {
    Car c;
    c.brand = "Honda";
    c.seats = 5;
    c.display();

    Bike b;
    b.brand = "Yamaha";
    b.cc = 150;
    b.display();

    return 0;
}