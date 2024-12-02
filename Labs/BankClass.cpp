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
    //code;
    return 0;
}