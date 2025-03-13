#include<iostream>
using namespace std;
int * unique(int *ptr,int size,int *new_size);
int main(){
	int size,new_size=0;
	cout<<"Enter size of array ";
	cin>>size;
	int *ptr;
	ptr=new int [size];
	for(int i=0;i<size;i++){
		cout<<"Enter element "<<i+1<<" ";
		cin>>ptr[i];
		
	}
   int *unq=unique(ptr,size,&new_size);
   for(int i=0;i<new_size;i++){
   	cout<<unq[i]<<" ";
   }
   delete[] ptr;
   delete[] unq;
}
int * unique(int *ptr,int size,int *new_size){
	int *temp;
	temp=new int [size];
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(ptr[i]==ptr[j]&& ptr[i]>=0){
				ptr[j]=-1;
			}
		}}
	for(int i=0;i<size;i++){
		if(ptr[i]>=0){
			temp[*new_size]=ptr[i];
			(*new_size)++;
		}
	}
	return temp;
	
	
}