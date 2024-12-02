#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        double balance = 0;
        string accountNumber = "";
    public:
        BankAccount(double amount, string name)
        {
            balance = amount;
            accountNumber = name;
        }
        void deposit(double amount)
        {
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
        int getBalance()
        {
            return balance;
        }
};

int main()
{
    BankAccount myAccount = BankAccount(1000, "ACCT12345");
    cout << "Current balance: " << myAccount.getBalance();
    myAccount.deposit(500);
    return 0;
}