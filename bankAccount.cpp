// A Program to declare, define, and use a bank account class
#include <iostream>
#include <cassert>
using namespace std;
// Class Definition (Declaration of all members)
class Account{
    private:
          long accNumber;
          double balance;
          static int base;
    public:
          Account(double bal);
          ~Account();
          void checkBalance()const;
          void deposit(double amount);
          void withdraw(double amount);
};

/*Initialization of the static data member -- Static data member are always initialized outside the class after declaring it in the class*/ 
int Account::base = 0;

// Definition of all member functions
// Parameter constructor
Account::Account(double bal):balance(bal){
    if(bal < 0.0){
        cout << "Balance is negative; program terminates";
        assert(false);
    }
    base++;
    accNumber = 178041745800 + base;
    cout << "Account " << accNumber << " is successfully opened." << endl;
    cout << "Balance = $" << balance << endl;
}

// Destructor
Account::~Account(){
    cout << "Account #: " << accNumber << " is closed." << endl;
    cout << "$" << balance <<" is the remaining balance in your account." << endl;
}

// Accessor member functions
void Account::checkBalance() const{
    cout << "Account #: " << accNumber << endl;
    cout << "Transaction: Balance check" << endl;
    cout << "Balance = $" << balance << endl;
}

// Mutator function
void Account::deposit(double amount){
    if(amount > 0.0){
        balance += amount;
        cout << "Account #: " << accNumber << endl;
        cout << "Transaction: Deposit of $" << amount << " has been made to your account." << endl;
        cout << "New Balance: $" << balance << endl;
    }
    else {
        cout << "Transaction aborted." << endl;
    }
}

// Mutator member function
void Account::withdraw(double amount){
    if(amount > balance){
        amount = balance;
    }
    balance -= amount;
    cout << "Account #: " << accNumber << endl;
    cout << "Transaction: withdrawal of $" << amount << endl;
    cout << "New Balance: $" << balance << endl;
}



// Application (the main function) to use the account class
int main(){
    // Creation of account
    int openBal, deposit, withdraw;
    // Prompt and output
    cout << "Deposit an amount of money to open your account: ";
    cin >> openBal;
    // Checking balance and creating an object of a class
    Account account(openBal);
    account.checkBalance();
    // Prompt and Output
    cout << "Enter the amount to deposit: ";
    cin >> deposit;
    // Calling the deposit function with the object - account
    account.deposit(deposit);
    account.checkBalance();
    // Prompt and Output
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;
    // Calling the withdraw function
    account.withdraw(withdraw);
    account.checkBalance();
    return 0;
}
