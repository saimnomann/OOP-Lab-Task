#include<iostream>
#include<time.h>
using namespace std;
int Sum(int **ptr,int rows,int cols);
int * rowSum(int **ptr,int rows,int cols);
int * colSum(int **ptr,int rows,int cols);
int * high_row_col(int *r,int *c,int rows,int cols);
int ** transpose(int **ptr,int rows,int cols);
int main(){
	int row,col,**ptr;
	cout<<"Enter number of rows ";
	cin>>row;
	cout<<"Enter number of coloumns ";
	cin>>col;
	if(row<=0 || col<=0){
		cout<<"Invalid row or coloumn";
	}
	else{
	ptr= new int* [row];
	for(int i=0;i<row;i++){
	*(ptr+i)=new int[col];
	}
	srand(time(0));
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		int randomNum = rand() % 101;
		ptr[i][j]=randomNum;

		}
	}
	cout<<"Original Matrix:"<<endl;
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
      cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}

int res= Sum(ptr,row,col);
cout<<"The sum of all elements is "<<res<<endl;
cout<<"Row Sum: ";

int *row_sum=rowSum(ptr,row,col);
for(int i=0;i<row;i++){
	
	cout<<row_sum[i]<<" ";
}
cout<<endl;
cout<<"Coloumn Sum: ";

int *col_sum=colSum(ptr,row,col);
for(int i=0;i<col;i++){
	
	cout<<col_sum[i]<<" ";
}
int *high=high_row_col(row_sum,col_sum,row,col);
cout<<endl;
cout<<"Row with Highest Sum : Row "<<high[0]<<endl;
cout<<"Coloumn with Highest Sum: Column "<<high[1]<<endl;

cout<<"Transpose Matrix:"<<endl;
int **trans=transpose(ptr,row,col);
for(int i=0;i<col;i++){
	for(int j=0;j<row;j++){
		cout<<trans[i][j]<<" ";
	}
	cout<<endl;
}
     for(int i=0;i<row;i++){
     	delete [] ptr[i];
	 }
     delete[] ptr;
     return 0;
}}
int Sum(int **ptr,int rows,int cols){
	int sum=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			sum+=ptr[i][j];
		}
	}
return sum;
}
int * rowSum(int **ptr,int rows,int cols){
	int *p,sum=0;
	p=new int[rows];
	for(int i=0;i<rows;i++ ){
	for(int j=0;j<cols;j++){
	sum+=ptr[i][j];}
	p[i]=sum;
	sum=0;
	}
return p;
}
int * colSum(int **ptr,int rows,int cols){
	int *p,sum=0;
	p=new int[cols];
	for(int i=0;i<cols;i++ ){
	for(int j=0;j<rows;j++){
	sum+=ptr[j][i];}
	p[i]=sum;
	sum=0;
	}
return p;
delete[] p;
}
int * high_row_col(int *r,int *c,int rows,int cols ){
	int high=0,*temp;
	temp=new int[2];
	for(int i=0;i<rows;i++){
		if(r[i]>high){
			high=r[i];
			temp[0]=i+1;
		}}
high=0;
	for(int i=0;i<cols;i++){
		if(c[i]>high){
			high=c[i];
			temp[1]=i+1;
		}
	}

	return temp;
	delete [] temp;
}

int **transpose(int **ptr,int rows,int cols){
	int **matrix;
	matrix=new int*[cols];
	for(int i=0;i<cols;i++){
		*(matrix+i)=new int[rows];
	}
  for(int i=0;i<cols;i++){
  	for(int j=0;j<rows;j++){
  		matrix[i][j]=ptr[j][i];
	  }
  }
  return matrix;
  delete[ ]matrix;
  for(int i=0;i<rows;i++){
  	delete[]matrix[i];
  }
}
	