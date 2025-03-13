#include<iostream>
#include<string>
using namespace std;
	struct Student{
		int m1,m2,m3;
		string  name;
		int total;
		float avg;
		char grade;
	};
	int main(){
		int n;
		cout<<"Enter number of students ";
		cin>>n;
		struct Student s[n];
		for(int i=0;i<n;i++){
		cout<<"Enter Student "<<i+1<<" Name"<<endl;
		cin>>s[i].name;
		cout<<"Enter marks of Student "<<i+1<<" for Maths: "<<endl;
		cin>>s[i].m1;
		cout<<"Enter marks of Student "<<i+1<<" for English: "<<endl;
		cin>>s[i].m2;
		cout<<"Enter marks of Student "<<i+1<<" for Science: "<<endl;
		cin>>s[i].m3;
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3;
		if(s[i].avg>=90){
			s[i].grade='A';
		}
		else if(s[i].avg>=80 && s[i].avg<90){
			s[i].grade='B';
		}
		else if(s[i].avg>=70 && s[i].avg<80){
			s[i].grade='C';
		}
		else if(s[i].avg>=60 && s[i].avg<70){
			s[i].grade='D';
		}
		else
		{
			s[i].grade='F';
		}
		}
		for(int i=0;i<n;i++){
			cout<<"Student "<<i+1<<" Name: " <<s[i].name<<endl;
			cout<<"Student "<<i+1<<" Maths Marks: "<<s[i].m1<<endl;
			cout<<"Student "<<i+1<<" English Marks: "<<s[i].m2<<endl;
			cout<<"Student "<<i+1<<" Science Marks: "<<s[i].m3<<endl;
			cout<<"Student "<<i+1<<" Total Marks: "<<s[i].total<<endl;
			cout<<"Student "<<i+1<<" Average: "<<s[i].avg<<endl;
			cout<<"Student "<<i+1<<" Grade: "<<s[i].grade<<endl;
			
		}
	}