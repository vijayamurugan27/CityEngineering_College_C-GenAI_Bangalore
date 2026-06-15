#include <iostream>
#include <string>

class BankAccount {
private:
    double balance;
    std::string ownerName;

public:
    void setOwnerName(std::string name) {
        ownerName = name;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    double getBalance() {
        return balance;
    }

    BankAccount() {
        balance = 0.0;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.setOwnerName("Alice");
    myAccount.deposit(150.50);
    std::cout << "Current Account Balance: $" << myAccount.getBalance() << std::endl;
    return 0;
}
