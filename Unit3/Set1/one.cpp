#include<iostream>
using namespace std;

class Account
{
    float balance;
public:
    Account()
    {
        balance = 0;
    }
    Account(float b)
    {
        balance = b;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1;
    Account a2(5000);
    a1.display();
    a2.display();
}
