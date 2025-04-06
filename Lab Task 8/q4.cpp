//Create a base class BankAccount with attributes like accountNumber, balance, and a
//virtual function calculateInterest().
#include<iostream>
using namespace std;
class BankAccount{
	protected:
	string accNumber;
	double balance;
	double interestRate;
	public:
		BankAccount(string a,double b){
			this->accNumber=a;
			this->balance=b;
		}
		BankAccount(){
			balance=0;
		}
		virtual void calculateInterest(){
		}
		void deposit(double amount){
			balance+=amount;
			cout<<"Depositing amount via cash "<<endl;
		}
	BankAccount operator +(const BankAccount &b2){
		BankAccount temp;
		temp.balance=balance+b2.balance;
		return temp;
	}	
	BankAccount operator -(double amount){
		BankAccount temp;
		temp.balance=balance-amount;
		return temp;
	}
	BankAccount operator *(double Irate){
		BankAccount temp;
		temp.balance=balance+(balance*Irate);
		return temp;
	}
	BankAccount operator /(int months){
		BankAccount temp;
		if(months==0){
			cout<<"Cannot divide by zero"<<endl;
		}
		else{
			temp.balance=balance/12;
		}
		return temp;
	}
	  void display() {
        cout << "Account Number: " << accNumber << ", Balance: $" << balance << endl;
    }
};
class SavingsAccount:public BankAccount{
	public:
		SavingsAccount(string accNum, double initialBalance) : BankAccount(accNum, initialBalance) {}
		void calculateInterest(){
			interestRate=0.05;
			 balance += balance * interestRate;
        cout << "Interest Applied to Savings Account: " << interestRate * 100 << "%" << endl;
    }
		void deposit(string n,double amount,string date){
			balance+=amount;
			cout<<"Depositing amount via check from Account: "<<n<<"on date: "<<date<<endl;
		}
		void deposit(string a,double amount){
			balance+=amount;
			cout<<"Depositing amount from "<<a<<" to "<<accNumber<<endl;
		}
		void withdraw(double amount){
			if(balance<500 || balance<amount){
				cout<<"You cannot Withdraw"<<endl;
			}
			else{
				balance-=amount;
			}
		}
};
class CurrentAccount:public BankAccount{
	public:
		 CurrentAccount(string accNum, double initialBalance) : BankAccount(accNum, initialBalance) {}

		void calculateInterest(){
	interestRate=0;
	cout << "No interest applied to Current Account." << endl;
		}

		void deposit(string n,double amount,string date){
			balance+=amount;
			cout<<"Depositing amount via cash from Account: "<<n<<"on date: "<<date<<endl;
		}
		void deposit(string n,double amount){
			balance+=amount;
			cout<<"Depositing amount from "<<n<<" to "<<accNumber<<endl;
		}
		void withdraw(double amount){
			if(amount<1000 || balance<amount){
				cout<<"You cannot Withdraw"<<endl;
			}
			else{
				balance-=amount;
			}
		}
		
};
int main(){
	 SavingsAccount savings("S12345", 1000.0);
    CurrentAccount current("C67890", 1500.0);
    savings.display();
    current.display();
    savings.deposit("A123", 200.0, "01/04/2025");
    savings.display();
    savings.calculateInterest();
    savings.display();
    current.deposit("B456", 300.0);
    current.display();
    current.calculateInterest();
    current.display();
    BankAccount total = savings + current;
    total.display();
    BankAccount reduced = savings - 200.0;
    reduced.display(); 
    BankAccount interestApplied = savings * 0.05;
    interestApplied.display();
    BankAccount installment = savings / 12;  
    installment.display();
    return 0;

}