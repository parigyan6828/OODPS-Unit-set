#include<iostream>
using namespace std;

class Account
{
    float balance;
public:
    Account(float b=0)
    {
        balance = b;
    }
    Account operator+(Account a)
    {
        return Account(balance + a.balance);
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1(2000), a2(3000);
    Account total = a1 + a2;
    total.display();
}
