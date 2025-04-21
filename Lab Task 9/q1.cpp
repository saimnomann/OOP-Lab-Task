#include<iostream>
using namespace std;
class Vehicle{
	protected:
	string model;
	double rate;
public:
	Vehicle(string m,double r){
		this->model=m;
		this->rate=r;
	}
	virtual double getDailyRate()=0;
	virtual void displayDetails()=0;
	    virtual ~Vehicle() {}
};
class Car:public Vehicle{
	public:
		Car(string m,double r):Vehicle(m,r){
		}
		double getDailyRate(){
			return rate;
		}
		void displayDetails(){
			cout<<"Car Model: "<<model<<endl;
			cout<<"Daily Rate: "<<rate<<endl;
		}
};
class Bike:public Vehicle{
	public:
		Bike(string m,double r):Vehicle(m,r){
		}
		double getDailyRate(){
			return rate;
		}
		void displayDetails(){
			cout<<"Bike Model: "<<model<<endl;
			cout<<"Daily Rate: "<<rate<<endl;
		}
};
int main(){
	Car c("Toyota",1500);
	Bike b("Honda",800);
	cout<<"The Daily Rate of Car is: "<<c.getDailyRate()<<endl;
	c.displayDetails();
	cout<<"The Daily Rate of Bike is: "<<b.getDailyRate()<<endl;
	b.displayDetails();
}