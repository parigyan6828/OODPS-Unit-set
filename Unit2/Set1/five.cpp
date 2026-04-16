#include<iostream>
using namespace std;

class Account
{
public:
    ~Account()
    {
        cout << "Account closed successfully" << endl;
    }
};

int main()
{
    Account a;
}
