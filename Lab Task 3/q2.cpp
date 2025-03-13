#include<iostream>
#include<conio.h>
using namespace std;
class tollBooth{
	private:
		unsigned int total_car;
		double amount;
		public:
		tollBooth():total_car(0),amount(0){}
		void payingCar(){
			total_car++;
			amount+=0.5;
		}
		void nopayCar(){
			total_car++;
			amount+=0;
		}
		void display(){
			cout<<"Total Cars: "<<total_car<<endl;
			cout<<"Total Amount:$ "<<amount<<endl;
		}
};
int main(){
	tollBooth t;
	cout<<"For Paying Car Press D key"<<endl;
	cout<<"For Non-Paying Car Press A key"<<endl;
	while(1){
	char choice=_getch();	
	if(choice== 'D')
	{
		cout<<"Paying Car Added!"<<endl;
		t.payingCar();
	}
	else if(choice =='A'){
		cout<<"Non Paying Car Added"<<endl;
		t.nopayCar();
	}
	else if(choice ==27){
		t.display();
		break;
	} 
	else{
		cout<<"Wrong Input"<<endl;
	}
	
}

}
