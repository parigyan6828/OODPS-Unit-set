#include<iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    float price;

    void read() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook Details:\n";
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book *b = new Book;

    b->read();
    b->display();

    delete b;

    return 0;
}
