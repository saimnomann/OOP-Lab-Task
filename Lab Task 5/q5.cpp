#include<iostream>
using namespace std;
class Engine{
	public:
		Engine(){
			cout<<"Engine Created "<<endl;
		}
		void Start(){
			cout<<"Engine Started "<<endl;
		}
		~Engine(){
			cout<<"Engine Destroyed"<<endl;
		}
};
class Wheels{
	int size;
	public:
		void setSize(int s){
			size=s;
		}
			Wheels(){
			cout<<"Wheel Created "<<endl;
		}
		void Rotate(){
			cout<<"Wheel Rotating "<<endl;
		}

};
class Headlights{
	string color;
	public:
	void setColor(string c){
	color=c;
	}
			Headlights(){
			cout<<"Headlights Created "<<endl;
		}
		void TurnOn(){
			cout<<color <<" Headlights On "<<endl;
		}
		void TurnOff(){
			cout<<color<<" Headlights Off "<<endl;
		}
	
};
class Steering{
	public:
			Steering(){
			cout<<"Steering Created "<<endl;
		}
		void Steer(){
			cout<<"Steering "<<endl;
		}
	
};
class Car{
	private:
		Engine engine;
		Wheels *wheel;
		Headlights *headlights;
		Steering steering;
		public:
			Car (Wheels *w,Headlights *h){
				this->wheel=w;
				this->headlights=h;
		}
			void Start(){
				engine.Start();
				cout<<"Car Started "<<endl;
			}
			void Drive(){
				wheel->setSize(10);
				wheel->Rotate();
				headlights->setColor("Yellow");
				headlights->TurnOn();
				steering.Steer();
				
			}
};
int main(){
		Wheels wheel;
		Headlights headlights;
		headlights.setColor("Yellow");
		Car c(&wheel,&headlights);
		c.Start();
		c.Drive();
}