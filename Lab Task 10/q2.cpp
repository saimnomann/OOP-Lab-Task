#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name,email,summary;
	int yearsOfExperience;
	cout<<"Enter Name: ";cin>>name;
	cout<<"Enter Email: ";cin>>email;
	cout<<"Enter Years of Experience: ";cin>>yearsOfExperience;
	cout<<"Enter Summary: ";cin>>summary;
	ofstream file;
	file.open("resume.txt",ios::trunc);
	file<<"Name: "<<name<<" Email: "<<email<<" Years of Experience: "<<yearsOfExperience<<" Summary: "<<summary;
	file.close();
	string line;
	ifstream read("resume.txt");
 while (getline(read, line)) {
        cout << line << endl;
    }

    read.close();
}