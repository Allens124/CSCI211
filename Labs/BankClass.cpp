#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        double balance;
        string accountNumber;
    public:
        BankAccount(double amount, string name)
        {
            balance = amount;
            accountNumber = name;
        }
        void deposit(double amount)
        {
            cout << "Depositing $" << amount << "." << endl;
            balance += amount;
        }
        void withdraw(double amount)
        {
            cout << "Attempting to withdraw $" << amount << "." << endl;
            if (amount > balance)
            {
                cout << "Insufficient funds." << endl;
            }
            else
            {
                cout << "Withdrawing $" << amount << "." << endl;
                balance -= amount;
            }
        }
        double getBalance()
        {
            return balance;
        }
};

int main()
{
    BankAccount myAccount = BankAccount(1000.00, "ACCT12345");
    cout << "Current balance: $" << myAccount.getBalance() << endl;
    myAccount.deposit(500.00);
    cout << "Current balance: $" << myAccount.getBalance() << endl;
    myAccount.withdraw(2000.00);
    cout << "Current balance: $" << myAccount.getBalance() << endl;
    return 0;
}