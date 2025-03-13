#include<iostream>
#include<string.h>
using namespace std;
char * swap_string(const char *str,int n);
int main(){
	string str;
	int n;
	cout<<"Enter a string ";
	cin>>str;
	cout<<"Enter number of characters to shift ";
	cin>>n;
	char *s=swap_string(str.c_str(),n);
	for(int i=0;s[i]!='\0';i++){
		cout<<s[i];
	}
}
char * swap_string(const char *str,int n){
	int size=strlen(str);
	char *temp=new char[size+1];
	for(int i=0;str[i]!='\0';i++){
		int x=i+n;
		if(x>=size){
			temp[x-size]=str[i];
		}
		else{
			temp[x]=str[i];
		}
	}

	return temp;
	delete[] temp;
}