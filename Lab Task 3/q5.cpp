#include<iostream>
using namespace std;
class Calendar{
	string January[31];
	string February[29];
	string March[31];
	string April[30];
	string May[31];
	string June[31];
	string July[30];
	string August[31];
	string September[30];
	string October[31];
	string November[30];
	string December[31];
	int current_year;
	public:
 Calendar(int y){
 	this->current_year=y;
 	int i;
	for(i=0;i<31;i++){
	  	this->January[i]="\0";
		}
		for(i=0;i<31;i++){
	  	this->February[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->March[i] ="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->April[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	May[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	June[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	July[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	August[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	September[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	October[i]="\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	November[i]= "\0" ;
		}
		for(i=0;i<31;i++){
	  	this->	December[i] = "\0" ;
		}
    } 	

		void addTask(int date,int month,string task){
			date--;
			if(month==1){
				if(date <=31){
					January[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			else if(month==2){
				if(date<=29){
					February[date]=task;
					cout<<"Task Added Successfully "<<endl;
				}
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			else if(month==3){
				if(date <=31){
					March[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==4){
				if(date <=30){
				April[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==5){
				if(date <=31){
					May[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==6){
				if(date <=31){
					June[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==7){
				if(date <=30){
					July[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==8){
				if(date <=31){
					August[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==9){
				if(date <=30){
					September[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			else if(month==10){
				if(date <=31){
					October[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==11){
				if(date <=30){
					November[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==12){
				if(date <=31){
					December[date]=task;
				cout<<"Task Added Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			
		}
	void removeTask(int date,int month){
		date--;
		if(month==1){
			January[date]="\0";
			cout<<"Task Removed Successfully"<<endl;
		}
			else if(month==2){
				if(date<=29){
					February[date]="\0";
					cout<<"Task Removed Successfully "<<endl;
				}
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			else if(month==3){
				if(date <=31){
					March[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==4){
				if(date <=30){
				April[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==5){
				if(date <=31){
					May[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
				else if(month==6){
				if(date <=31){
					June[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			else if(month==7){
				if(date <=30){
					July[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
		else if(month==8){
				if(date <=31){
					August[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
		else	if(month==9){
				if(date <=30){
					September[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
		else	if(month==10){
				if(date <=31){
					October[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
		else if(month==11){
				if(date <=30){
					November[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
		else if(month==12){
				if(date <=31){
					December[date]="\0";
				cout<<"Task Removed Successfully "<<endl;
				}
				
				else{
					cout<<"Invalid Date "<<endl;
				}
			}
			
		
		
	}
void showTask(){
	  	int i ;
	  	for(i=0;i<31;i++){
	  		if(January[i] != "\0"){
	  			cout << i+1<<"/"<<"1/"<<current_year<<": "<<January[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(February[i]!="\0"){
	  			cout << i+1<<"/"<<"2/"<<current_year<<": "<<February[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(March[i]!="\0"){
	  			cout << i+1<<"/"<<"3/"<<current_year<<": "<<March[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(April[i]!="\0"){
	  			cout <<i+1<<"/"<<"4/"<<current_year<<": " <<April[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(May[i]!="\0"){
	  			cout << i+1<<"/"<<"5/"<<current_year<<": "<<May[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(June[i]!="\0"){
	  			cout << i+1<<"/"<<"6/"<<current_year<<": "<<June[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(July[i]!="\0"){
	  			cout << i+1<<"/"<<"7/"<<current_year<<": "<<July[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(August[i]!="\0"){
	  			cout << i+1<<"/"<<"8/"<<current_year<<": "<<August[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(September[i]!="\0"){
	  			cout << i+1<<"/"<<"9/"<<current_year<<": "<<September[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(October[i]!="\0"){
	  			cout << i+1<<"/"<<"10/"<<current_year<<": "<<October[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(November[i]!="\0"){
	  			cout <<i+1<<"/"<<"11/"<<current_year<<": "<<November[i] << endl ;
			  }
		}
		for(i=0;i<31;i++){
	  		if(December[i]!="\0"){
	  			cout <<i+1<<"/"<<"12/"<<current_year<<": " <<December[i] << endl ;
			  }
		}
	  }
};
int main(){
	Calendar c(2025);
	c.addTask(15,2,"Study");
	c.addTask(25,2,"Dance");
	c.addTask(7,2,"Sing");
	c.addTask(23,3,"Sleep");
	c.showTask();
	c.removeTask(23,3);
	c.showTask();
}