#include<iostream>
using namespace std;
struct Register{
	int courseId;
	string courseName;
};
struct Student{
	int stdId;
	string fName;
	string lName;
	int cellNo;
string email;
struct Register reg;
};
int main(){
	struct Student s[5];
	for(int i=0;i<5;i++){
		cout<<"Enter Student Id: ";cin>>s[i].stdId;
		cout<<"Enter Student First Name: ";cin>>s[i].fName;
		cout<<"Enter Student Last Name: ";cin>>s[i].lName;
		cout<<"Enter Student Cell Number: ";cin>>s[i].cellNo;
		cout<<"Enter Student Email: ";cin>>s[i].email;
		cout<<"Enter Course Id: ";cin>>s[i].reg.courseId;
		cout<<"Enter Course Name: ";cin>>s[i].reg.courseName;
	}
	cout<<"Student Information "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Student Id: "<<s[i].stdId<<endl;
		cout<<"Student First Name: "<<s[i].fName<<endl;
		cout<<"Student Last Name: "<<s[i].lName<<endl;
		cout<<"Student Cell Number: "<<s[i].cellNo<<endl;
		cout<<"Student Email: "<<s[i].email<<endl;
		cout<<"Course Id: "<<s[i].reg.courseId<<endl;
		cout<<"Course Name: "<<s[i].reg.courseName<<endl;
	}
	
}