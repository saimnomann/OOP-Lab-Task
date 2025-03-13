#include<iostream>
using namespace std;
class Account{
string account_no;
string accountHolderName;
double balance;
public:
	Account(){
		this->balance=0.0;
	}
	Account(string acc_no,string name,double b){
		this->account_no=acc_no;
		this->accountHolderName=name;
		this->balance=b;
	}
	void deposit(double amount){
		this->balance+=amount;
		cout<<"Amount Added Successfully."<<endl;
	}
	void withdraw(double amount){
		if(balance>0.0 && balance>amount){
			balance-=amount;
			cout<<"Amount WithDrawn Successfully."<<endl;
		}
		else{
			cout<<"Insufficient Balance."<<endl;
		}
	}
	void checkBalance(){
		cout<<"Your cuurent Balance is "<<balance<<endl;
	}
};
int main(){
	Account a1("PK1244546","Saim",1500);
	Account a2("HABL12246","Ali",90);
	Account a3("FAYS12344","Ahmed",120);
	a2.deposit(1500);
	a2.checkBalance();
	a1.withdraw(200);
	a1.checkBalance();
	a3.withdraw(123);
	a3.checkBalance();
	
}