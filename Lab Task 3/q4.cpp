#include<iostream>
#include<iomanip> 
using namespace std;
class Angle{
	int degree;
	float min;
	char direction;
	public:
	Angle(int deg,float m,char d){
		this->degree=deg;
		this->min=m;
		this->direction=d;
	}
	void val(){
	while(1){
	cout<<"Enter direction (N, S, E, or W): ";
    cin>>direction;
	if(direction =='W' || direction == 'E'){
	
		cout<<"Enter degree (0 To 180): ";
        cin>>degree;
         if (degree >= 0 && degree <= 180) {
                    break;
                } else {
                    cout << "Invalid degree for longitude. Please enter a value between 0 and 180." << endl;
                }
            }

else if(direction=='S'|| direction == 'N'){
	cout<<"Enter degree (0 To 90): ";
	cin>>degree;
	if (degree >= 0 && degree <= 90) {
    break;
    } 
	else {
        cout << "Invalid degree for latitude. Please enter a value between 0 and 90." << endl;
        }
}
else{
	cout<<"Invalid direction "<<endl;
}}
        while(1){
		cout<<"Enter minutes (0 to 60):";
        cin>>min;
        if(min>=0.0 && min<=60.0){
        	break;
		}
		else{
			cout<<"Invalid minutes. Please enter a value between 0.0 and 60.0."<<endl;
		}
	}
}

	void display(){
		cout<<degree<<"\xF8"<<fixed<<setprecision(1)<<min<<"'"<<direction<<endl;
	}
};
int main(){
Angle a(0,.5,'W');
int choice;
while(1){
a.val();
a.display();
cout<<"Enter 0 to exit ";
cin>>choice;
if(choice==0){
	break;
}
}
}