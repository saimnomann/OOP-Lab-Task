#include<iostream>
using namespace std;
class Car{
	int carId;
	string model;
	int year;
	bool isRented;
public:
  Car(){
  	isRented=false;
  }
  Car(int id,string m,int y,bool isrented){
  	 this->carId=id;
  	 this->model=m;
  	 this->year=y;
  	 this->isRented=isrented;
  }
void rentCar(){
	isRented=true;
	cout<<"Car is rented Successfully"<<endl;
}
void returnCar(){
	isRented=false;
	cout<<"Car returned Successfully"<<endl;
}
bool isVintage(){
	if(year<2000){
		cout<<"Car is vintage"<<endl;
		return true;
	}
	else{
	 cout<<"Car is not Vintage"<<endl;
	 return false;
	}
}
};
int main(){
	Car c1(101, "Toyota Camry", 1999, false);
	Car c2(123,"Tesla",2022,true);
	c1.rentCar();
	c1.isVintage();
	c2.rentCar();
	c1.returnCar();
	
}