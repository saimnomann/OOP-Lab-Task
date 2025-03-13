#include<iostream>
using namespace std;
struct Date{
	int day;
	string month;
    int year;
	
};
struct Event{
	string name;
	struct Date date;
	string venue;
	string organizer;
	
};

int main(){
	int n,op;
	cout<<"Enter number of events ";
	cin>>n;
	struct Event *ptr;
	ptr=new Event [n];
	for(int i=0;i<n;i++){
		cout<<"Enter event name ";
		cin>>ptr[i].name;
		cout<<"Enter event date day ";
		cin>>ptr[i].date.day;
		cout<<"Enter event date month ";
		cin>>ptr[i].date.month;
		cout<<"Enter event date year ";
		cin>>ptr[i].date.year;
		cout<<"Enter event venue ";
		cin>>ptr[i].venue;
		cout<<"Enter event organizer ";
		cin>>ptr[i].organizer;	}
		while(1){
		cout<<"Enter 0 to show all events"<<endl<<"Enter 1 to search events based on dates"<<endl<<"Enter 2 to exit"<<endl;
		cin>>op;
		if(op==0){
				cout<<"Showing all Events"<<endl;
			for(int i=0;i<n;i++){
				cout<<"Event Name: "<<ptr[i].name<<endl;
				cout<<"Event Date: "<<ptr[i].date.day<<"/"<<ptr[i].date.month<<"/"<<ptr[i].date.year<<endl;
				cout<<"Event Venue: "<<ptr[i].venue<<endl;
				cout<<"Event Organizer: "<<ptr[i].organizer<<endl;
			}
		}
		else if(op==1){
			int day,yrs,temp;
			string mon;
			cout<<"Enter event Date Day ";
			cin>>day;
			cout<<"Enter event Date Month ";
			cin>>mon;
			cout<<"Enter event Date Year ";
			cin>>yrs;
			for(int i=0;i<n;i++){
				if(ptr[i].date.day==day && ptr[i].date.month==mon && ptr[i].date.year==yrs){
				temp=1;
				cout<<"Event Name: "<<ptr[i].name<<endl;
				cout<<"Event Date: "<<ptr[i].date.day<<"/"<<ptr[i].date.month<<"/"<<ptr[i].date.year<<endl;
				cout<<"Event Venue: "<<ptr[i].venue<<endl;
				cout<<"Event Organizer: "<<ptr[i].organizer<<endl;
				break;
				}
				else{
					temp=0;
				}
			}
				if(temp==0){
					cout<<"Event Not Found!"<<endl;
				}
			}
			else{
				break;
			}
		
		
		}
}