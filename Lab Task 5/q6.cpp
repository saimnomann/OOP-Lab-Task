#include<iostream>
using namespace std;
class GraphicsRenderingEngine{
	public:
		GraphicsRenderingEngine(){
        cout<<"Rendering Engine Created "<<endl;		
		}
		~GraphicsRenderingEngine(){
        cout<<"Rendering Engine Destroyed "<<endl;		
		}
		
}; 
class InputEngine{
	public:
		InputEngine(){
			cout<<"Input Engine Created "<<endl;
		}
		~InputEngine(){
			cout<<"Input Engine Destroyed "<<endl;
		}
};
class PhysicalEngine{
	public:
		PhysicalEngine(){
			cout<<"Physical Engine Created "<<endl;
		}
		~PhysicalEngine(){
			cout<<"Physical Engine Destroyed "<<endl;
		}
};
class GameEngine{
 GraphicsRenderingEngine g;
 InputEngine i;
 PhysicalEngine p;
 public:
 	GameEngine(){
 		cout<<"GameEngine Created "<<endl;
	 }


~GameEngine(){
	cout<<"Game Engine Destroyed"<<endl;
}
};
int main(){
	GameEngine g;

	
}