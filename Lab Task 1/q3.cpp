#include <iostream>
using namespace std;
int main(){
	int size,i,j,sum;
	cout<<"Enter size of array ";
	cin>>size;
	int target,num[size],res[2];
	for( i=0;i<size;i++){
		cout<<"Enter element ";
		cin>>num[i];
	}
	cout<<"Enter target ";
    cin>>target;
	for(i=0;i<size-1;i++){
		for(j=1;j<size;j++){
			sum=num[i]+num[j];
			if(sum==target){
				res[0]=i;
				res[1]=j;
			}
		}
	}	
	cout<<"[";
	for(i=0;i<2;i++){
		cout<<res[i]<<" ";
	}
	cout<<"]";
}