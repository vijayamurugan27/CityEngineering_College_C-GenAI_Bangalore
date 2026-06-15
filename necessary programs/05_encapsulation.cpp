#include <iostream>
#include <string>

/*
 * ENCAPSULATION:
 * Encapsulation is one of the fundamental concepts of Object-Oriented Programming (OOP).
 * It refers to the bundling of data (variables) and the methods (functions) that operate on 
 * that data into a single unit (class).
 * It also involves restricting direct access to some of the object's components, 
 * which is a means of preventing accidental modification. This is done using access specifiers:
 *   - private: Members are accessible only within the class.
 *   - public: Members are accessible outside the class.
 */

class BankAccount {
private:
    // Private variables - hidden from direct access outside the class
    std::string ownerName;
    double balance;

public:
    // Constructor to initialize variables
    BankAccount(std::string name, double initialBalance) {
        ownerName = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            std::cout << "Invalid initial balance! Set to 0." << std::endl;
        }
    }

    // Getter function for ownerName (Read-only access)
    std::string getOwnerName() const {
        return ownerName;
    }

    // Getter function for balance (Read-only access)
    double getBalance() const {
        return balance;
    }

    // Setter function to deposit money (Controlled write access with validation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    // Setter function to withdraw money (Controlled write access with validation)
    void withdraw(double amount) {
        if (amount <= 0) {
            std::cout << "Invalid withdrawal amount!" << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds for withdrawal of $" << amount << "!" << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
        }
    }
};

int main() {
    // Create an object of BankAccount
    BankAccount myAccount("John Doe", 500.0);

    // we cannot access private members directly, e.g., myAccount.balance = 10000; (Compiler Error)
    // Direct modification is prohibited to ensure data security.
    
    // Read data using public getter functions
    std::cout << "Account Owner: " << myAccount.getOwnerName() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    // Modify data through controlled public methods
    myAccount.deposit(150.0);
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    myAccount.withdraw(100.0);
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    // Testing validation
    myAccount.withdraw(1000.0); // Should fail due to insufficient balance
    
    return 0;
}
