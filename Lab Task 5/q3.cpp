#include<iostream>
using namespace std;
class ValidateString{
	string str;
	public:
		ValidateString(string s){
			str=s;
		}
		const void isValid(){
			bool check=true;
			for(int i=0;str[i]!='\0';i++){
				if(!(str[i]>='a' && str[i]<='z')&& !(str[i]>='A' && str[i]<='Z')){
				check=false;
				cout<<"String is inValid"<<endl;
				break;
				}
		}
		if(check){
			cout<<"String is Valid"<<endl;
		}
	}
};
int main(){
	ValidateString s1("BabarKing");
	ValidateString s2("123Sa%");
	s1.isValid();
	s2.isValid();
}
//In C++, when we declare a member function as const, it means that the function is not allowed to modify any member variables of the class (except those marked as mutable) and cannot call non-const member functions of the class