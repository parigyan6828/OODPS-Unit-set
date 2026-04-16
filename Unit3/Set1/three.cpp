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
    void deposit(float amt)
    {
        balance += amt;
    }
    void deposit(float amt, float bonus)
    {
        balance += amt + bonus;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a;
    a.deposit(1000);
    a.deposit(2000, 200);
    a.display();
}
