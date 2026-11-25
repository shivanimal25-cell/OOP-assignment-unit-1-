#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {
        cout << "Employee record created" << endl;
    }

    ~Employee() {
        cout << "Employee record deleted" << endl;
    }
};

int main() {
    Employee e1;
    cout << "Processing completed" << endl;
    return 0;
}