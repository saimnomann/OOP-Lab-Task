#include<iostream>
#include<exception>
using namespace std;
class InvalidValueException:public exception{
	const char *msg;
public:
	InvalidValueException(const char *m):msg(m){
	}
const char* what() const noexcept {
		return msg;
	}
};
void validateAge(int age){
	if(age<0||age){
		throw InvalidValueException("Invalid Age");
	}
	else{
		cout<<"Valid Age";
	}
}
int main(){
	try{
		
	validateAge(140);
}catch(const  InvalidValueException &e){
	cout<<"Exception caught: "<<e.what()<<endl;
}
}