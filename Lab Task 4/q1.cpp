#include<iostream>
using namespace std;
class Student{
	int stdId;
	string name;
	int age;
	char grade;
	public:
	Student(){
			this->grade='N';
		}
    Student(int id,string n,int a,char g){
	this->age=a;
	this->stdId=id;
	this->grade=g;
	this->name=n;
	}
	void upgradeGrade(){
	
		if(grade=='A'){
			cout<<"Cannot upgrade grade"<<endl;
		}
		else if(grade=='B'){
			cout<<"Grade upgraded from "<<grade;
			grade='A';
			cout<<" to "<<grade<<endl;
		}
		else if (grade=='C'){
			cout<<"Grade upgraded from "<<grade;
			grade='B';
			cout<<" to "<<grade<<endl;
		}
		else if (grade=='D'){
			cout<<"Grade upgraded from "<<grade;
			grade='C';
			cout<<" to "<<grade<<endl;
		}
		else{
			cout<<"Grade upgraded from "<<grade;
			grade='D';
			cout<<" to "<<grade<<endl;
		}
	}
	bool isEligibleForScholarship(){
		if(grade=='A'){
			cout<<"You are eligible"<<endl;
			return true;
		}
		else{
			cout<<"You are not eligible"<<endl;
			return false;
		}
	}
	void displayDetails(){
		cout<<"Student Id: "<<stdId<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Grade: "<<grade<<endl;
	}
};
int main(){
	bool x;
	Student s1(1010,"Saim",18,'B');
	Student s2(1111,"Rafay",19,'A');
	Student s3(1122,"Saad",20,'C');
	Student s4(1555,"Huzaifa",21,'D');
	s1.upgradeGrade();
	x=s1.isEligibleForScholarship();
	s1.displayDetails();
	s2.upgradeGrade();
	s2.isEligibleForScholarship();
	s3.upgradeGrade();
	s3.isEligibleForScholarship();
	s3.displayDetails();
	s4.upgradeGrade();
	s4.isEligibleForScholarship();
	s4.displayDetails();
}