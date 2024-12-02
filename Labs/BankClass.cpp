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
            cout << "Depositing $" << amount << endl;
            balance += amount;
        }
        void withdraw(double amount)
        {
            if (balance-amount < 0)
            {
                cout << "Insufficient funds." << endl;
            }
            else
            {
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
    BankAccount myAccount = BankAccount(1000, "ACCT12345");
    cout << "Current balance: " << myAccount.getBalance() << endl;
    myAccount.deposit(500);
    cout << "Current balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(2000);
    cout << "Current balance: " << myAccount.getBalance() << endl;
    return 0;
}