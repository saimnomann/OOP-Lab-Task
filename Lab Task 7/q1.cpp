#include<iostream>
using namespace std;
class Account{
	protected:
	string accountNumber;
	double balance;
	string accountHolderName;
	string accountType;
	public:
		Account(string a,double b,string n,string t){
			this->accountNumber=a;
			this->accountHolderName=n;
			this->balance=b;
			this->accountType=t;
		}
		void deposit(double amount){
			balance+=amount;
			cout<<"Amount Added Successfully "<<endl;
		}
		void withdraw(double amount){
			if(amount<balance){
				this->balance-=amount;
				cout<<"Amount Withdrawn Successfully"<<endl;
			}
		}
		void printStatement(){
			cout<<"Balance is : "<<balance<<endl;
		}
		void getAccountInfo{
		cout<<"Account Number: "<<accountNumber<<endl;
		cout<<"Account Holder Name: "<<accountHolderName<<endl;
		cout<<"Account Type: "<<accountType<<endl;
		cout<<"Balance: "<<balance<<endl;
		}
		void calculateInterest(){
			
		}
		
};
class SavingsAccount:public Account{
	float interestRate;
	double min_Balance;
public:
	SavingsAccount(string a,double b,string n,string t,float ir,double min):Account(a,b,n,t){
		this->interestRate=ir;
		this->min_Balance=min;
	}
	void calculateInterest(){
		float x=balance*interestRate;
		balance=balance+x;
		cout<<"Interest is "<<balance<<endl;
	}
	void withdraw(double amount){
		if(balance>amount){
			balance-=ammount;
			cout<<"Amount Withdrawn Successfully"<<endl;
			
		}
	}
};
class CheckingAccount:public Account{
	
}
