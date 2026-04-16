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
