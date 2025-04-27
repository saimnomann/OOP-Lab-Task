#include<iostream>
#include<fstream>
using namespace std;
struct Student{
	int id;
	string name;
	float gpa;
};
int main(){
	Student s[5];
	for(int i=0;i<5;i++){
		cout<<"Enter Student "<<i+1<<" id: ";
		cin>>s[i].id;
		cout<<"Enter Student "<<i+1<<" name: ";
		cin>>s[i].name;
		cout<<"Enter Student "<<i+1<<" gpa: ";
		cin>>s[i].gpa;
	}
	ofstream out;
	out.open("Student.txt");
	for(int i=0;i<5;i++){
		out<<s[i].id<<" "<<s[i].name<<" "<<s[i].gpa<<endl;
	}
	cout<<"Data Entered Succesfully"<<endl;
	out.close();
	out.open("Student.txt",ios::app);
	out<<6<<" Maarij "<<4;
	cout<<"Data Appended Succesfully"<<endl;
	out.close();
	ifstream in("Student.txt");
	char str[100];
	cout << "Data in the file:" << endl;
	for(int i=0;i<6;i++){
		in.getline(str,100);
		cout<<str<<endl;
	}
	
}