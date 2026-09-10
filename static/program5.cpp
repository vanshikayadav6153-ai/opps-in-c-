#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
    string owner;
    double balance;         

    static double totalDeposits; 
    static int    accountCount;   

    public:
    BankAccount(string name, double opening = 0)
    {
        owner   = name;
        balance = opening;
        totalDeposits += opening;
        accountCount++;
    }

    void deposit(double amount)
    {
        balance       += amount;
        totalDeposits += amount;  
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << owner << ": insufficient funds\n";
            return;
        }
        balance -= amount;      
    }

    void statement() const
    {
        cout << owner << "'s balance: " << balance << endl;
    }
    static void report()
    {
        cout << "BANK REPORT ";
        cout << "Accounts opened : " << accountCount  << endl;
        cout << "Total deposits  : " << totalDeposits << endl;
        cout << "Average deposit : " << totalDeposits / accountCount << endl;
    }
};

double BankAccount::totalDeposits = 0 ;   
int    BankAccount::accountCount  = 0;

int main()
{
    BankAccount a("Asha", 1000);
    BankAccount b("Ravi", 500);
    BankAccount c("Meera",200);

    a.deposit(2000);
    b.deposit(750);
    c.deposit(300);
    b.withdraw(200);

    a.statement();
    b.statement();
    c.statement();

    BankAccount::report();

    return 0;
}
