#include<iostream>
using namespace std;
class PaymentMethod{
	virtual void processPayment(double amount)=0;
	
};
class CreditCard:public PaymentMethod{
	string cardNumber;
	public:
		CreditCard(string c){
			this->cardNumber=c;
		}
		void processPayment(double amount){
			cout<<"Processing credit card payment of "<<amount<<" using card "<<cardNumber<<endl;
		}

};
class DigitalWallet:public PaymentMethod{
	double balance;
	public:
		DigitalWallet(double b) {
        balance = b;
    }
    void processPayment(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Payment of " << amount << " successful. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

};
int main(){
	CreditCard cc("12345678");
	DigitalWallet d(100);
	cc.processPayment(1500);
	d.processPayment(100);
	d.processPayment(250);
	
}