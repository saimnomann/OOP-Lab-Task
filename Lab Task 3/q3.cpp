#include<iostream>
using namespace std;
class Object{
	private:
		static int count;
		int serial_num;
	public:
		Object(){
			count++;
			serial_num=count;
		}
	void display(){
		cout<<"This is object "<<serial_num<<endl;
	}
	
};
int Object::count=0;
int main(){
	Object o1,o2,o3;
	o1.display();
	o2.display();
	o3.display();
}
