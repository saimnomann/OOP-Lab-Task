#include<iostream>
using namespace std;
class Square{
	float sideLength;
	float area;
	static float allareas;
	public:
		Square():sideLength(0.0),area(0.0){}
Square(float l){
	this->sideLength=l;
}	
void Area(){
	this->area=sideLength*sideLength;
	this->allareas+=area;
}
float get_sideLength() const {
        return sideLength;
    }

    float get_area() const {
        return area;
    }

    static float get_allareas() {
        return allareas;
    }

    void set_sideLength(float side) {
        sideLength = side;
    }

    void set_area(float a) {
        area = a;
    }

};
float Square::allareas=0.0;
int main(){
Square s1(4.0);
Square s2(2.0);
Square s3(5.0);
s1.Area();
cout<<"Area is "<<s1.get_area()<<endl<<"Total Area is "<<s1.get_allareas()<<endl;
s2.Area();
cout<<"Area is "<<s2.get_area()<<endl<<"Total Area is "<<s2.get_allareas()<<endl;
s3.Area();
cout<<"Area is "<<s3.get_area()<<endl<<"Total Area is "<<s3.get_allareas()<<endl;
}