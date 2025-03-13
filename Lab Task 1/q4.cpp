#include<iostream>;
using namespace std;
int main(){
	int n,area,temp,max_area=0;
	cout<<"Enter number of vertical lines ";
	cin>>n;
	int height[n];
	for(int i=0;i<n;i++){
		cout<<"Enter element ";
		cin>>height[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(height[i]<height[j]){
				temp=height[i];
			}
			else{
				temp=height[j];
			}
	area=temp*(j-i);
	if(area>max_area){
		max_area=area;
	}
	
		}
	}
	cout<<"Max Area is "<<max_area;
	}