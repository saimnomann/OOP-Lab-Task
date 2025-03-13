#include<iostream>
using namespace std;
class Book{
	int id;
	string title;
	string author;
	bool availability;
	public:
		void setId(int Id){
			this->id=Id;
		}
		int getId(){
			return id;
		}
		void setTitle(string Title){
			this->title=Title;
		}
		string getTitle(){
			return title;
		}
		void setAuthor(string a){
			this->author=a;
		}
		string getAuthor(){
			return author;
		}
		void setAvailability(bool a){
			this->availability=a;
		}
		bool getAvailability(){
			return availability;
		}
};
class Library{
public:
	int size=0;
		Book *b=new Book[100];
	void addBook(int id,string t,string ath,bool a){
			for(int i=0;i<size;i++){
				cout<<"Book Id already existed"<<endl;
			break;
			}
		b[size].setId(id);
		b[size].getId();
		b[size].setAuthor(ath);
		b[size].getAuthor();
		b[size].setTitle(t);
		b[size].getTitle();
		b[size].setAvailability(a);
		b[size].getAvailability();
		size++;
		cout<<"Book Added Successfully"<<endl;
	}
void borrowBook(int Id){
	int temp=0;
	for(int i=0;i<size;i++){
		if(b[i].getId()==Id){
			cout<<"Book has been Borrowed"<<endl;
			b[i].setAvailability(false);
			b[i].getAvailability();
		 temp=1;
			break;
		}
		else{
			temp=0;
		}
	}
		if(temp==0){
			cout<<"Book Not Available"<<endl;
		}
}
void returnBook(int Id){
	int temp=0;
	for(int i=0;i<size;i++){
		if(b[i].getId()==Id){
			cout<<"Book has been Borrowed"<<endl;
			b[i].setAvailability(true);
			b[i].getAvailability();
			temp=1;
			break;
		}
		else{
			temp=0;
		}
	}
		if(temp==0){
			cout<<"Book Not Available"<<endl;
		}
}
void DisplayBook(){
	for(int i=0;i<size;i++){
		cout<<"\nBook Id: "<<b[i].getId()<<endl;
		cout<<"Book Title: "<<b[i].getTitle()<<endl;
		cout<<"Book Author: "<<b[i].getAuthor()<<endl;
		cout<<"Book Availability: "<<b[i].getAvailability();
	}
}
 ~Library(){
 	delete[]b;
 }
};

int main(){
	Library l1,l2,l3;
	l1.addBook(101,"Allice in the WonderLand","Lewis Carroll",true);
	l2.addBook(102, "The Great Gatsby", "F. Scott Fitzgerald", true);
	l3.addBook(103, "To Kill a Mockingbird", "Harper Lee", true);
	l1.borrowBook(101);
	l1.returnBook(1);
	l2.borrowBook(2);
	l1.DisplayBook();
	l2.DisplayBook();
	l3.DisplayBook();
	
}
