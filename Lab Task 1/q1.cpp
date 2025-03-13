#include<iostream>
using namespace std;
int main(){
	int i,num,temp;
	cout<<"Enter number: ";
	cin>>num;
	for(i=2;i<num;i++){
		if(num%i==0){
			temp=0;
			break;
		}
		else{
			temp=1;
		}
	}
	if(temp==1){
		cout<<"The number is prime ";
	}
	else{
		cout<<"The number is not prime ";
	}
}