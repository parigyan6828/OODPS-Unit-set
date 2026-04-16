#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basic, gross;

public:
    void read() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        gross = basic + (0.2 * basic) + (0.1 * basic);
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nGross Salary: " << gross << endl;
    }
};
int main() {
    Employee e1, e2;

    e1.read();
    e1.calculate();
    e1.display();

    e2.read();
    e2.calculate();
    e2.display();

    return 0;
}
