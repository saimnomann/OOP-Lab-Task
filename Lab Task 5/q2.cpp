#include<iostream>
using namespace std;
class LoanHelper{
	static const float interestRate;
	float amountTaken;
	int months;
	public:
		LoanHelper(float a,int m){
			amountTaken=a;
			months=m;
		}
		void loanRepayment(){ 
			float x,y;
			x=amountTaken/months;
			y=x+x*interestRate;
			cout<<"You have to pay "<<y<<" for every "<<months<< "month"<<endl;
		}
};
const float LoanHelper::interestRate=(0.5/100);
int main(){
	LoanHelper l1(1000,12);
	l1.loanRepayment();
	LoanHelper l2(500,12);
	l2.loanRepayment();
	LoanHelper l3(700,6);
	l3.loanRepayment();
}
