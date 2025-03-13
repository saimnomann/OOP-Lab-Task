#include<iostream>
using namespace std;
int main(){
int n,temp=0;
float num;
float sum;
 cout<<"Enter number of elements ";
 cin>>n;
 float *ptr;
 ptr=new float[n];
 for(int i=0;i<n;i++){
 	cout<<"Enter number ";
 	cin>>ptr[i];
 }
 for(int i=0;i<n;i++){
    sum+=ptr[i];
 }
 float avg=sum/n;
 int diff;
 cout<<"The average is "<<avg<<endl;
    diff=avg-ptr[0];
      if(diff<0){
   	diff=-diff;
   }
 for(int i=0;i<n;i++){
 	temp=avg-ptr[i];
   if(temp<0){
   temp=-temp;
   }
   if(temp<diff){
   	num=ptr[i];
   }
 }
 cout<<"The number closest is "<<num;
 delete ptr;
}