#include<iostream>
using namespace std;

class Account
{
    float balance;
public:
    Account(float b)
    {
        balance = b;
    }
    Account(const Account &a)
    {
        balance = a.balance;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1(3000);
    Account a2 = a1;
    a1.display();
    a2.display();
}
