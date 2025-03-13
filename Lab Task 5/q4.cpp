#include<iostream>
using namespace std;
class BankAccount{
	string accNum;
	string name;
	double balance;
	public:
		BankAccount():balance(0.0){
		}
		BankAccount(string a,string n,double bal):accNum(a),name(n),balance(bal){}
		
		void deposit(double amount){
			 balance+=amount;
			 cout<<"Amount Added Successfully! "<<endl;
		}
		void withdraw(double amount){
			if(amount<balance){
				balance-=amount;
				cout<<"Amount Withdrawn Successfully! "<<endl;}
				else{
					cout<<"Insufficient Balance! "<<endl;
				}
			}
			void display(){
				cout<<"Account Number: "<<accNum<<endl;
				cout<<"Account Holder Name: "<<name<<endl;
				cout<<"Current Balance: "<<balance<<endl;
			}
		};
	int main(){
		BankAccount b[3];
		b[0]=BankAccount("PK2131243234","Saim",1350);
		b[1]=BankAccount("PK1232143324","Rafay",1050);
		b[2]=BankAccount("FAYS23242354","Huzaifa",150);
		for(int i=0;i<3;i++){
			b[i].display();
		}
		b[2].deposit(500);
		b[2].display();
		b[0].withdraw(200);
		b[0].display();
	}