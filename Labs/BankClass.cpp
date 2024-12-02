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
};

int main()
{
    //code;
    return 0;
}