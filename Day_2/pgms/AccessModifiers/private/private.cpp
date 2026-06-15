#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    void setBalance(int b)
    {
        balance = b;
    }

    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    // Correct way
    acc.setBalance(5000);
    acc.showBalance();

    // Wrong way
    // acc.balance = 5000; // This will cause a compilation error
    // balance is private and cannot be accessed directly


    return 0;
}