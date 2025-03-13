#include<iostream>
using namespace std;
class Time{
	private:
	int hours;
	int min;
	int sec;
	public:
		Time():hours(0),min(0),sec(0){
		}
		Time(int h,int m,int s){
			this->hours=h;
			this->min=m;
			this->sec=s;
		}
	void display(){
		cout<<hours<<":"<<min<<":"<<sec;
	}
	void add(const Time &t1,const Time &t2){
		sec=t1.sec+t2.sec;
		min=t1.min+t2.min;
		hours=t1.hours+t2.hours;
		if(sec>=60){
			sec-=60;
			min++;
		}
		else if(min>=60){
			min=-60;
			hours++;
		}
	}
};
int main(){
	const Time t1(10,12,56);
	const Time t2(13,15,1);
    Time t3;
	t3.add(t1,t2);
	t3.display();
}
