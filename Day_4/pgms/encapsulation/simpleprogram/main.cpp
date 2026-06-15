#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance = 5000;

public:
    void showBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.showBalance();

    return 0;
}


// Balance = 5000