#include<iostream>
using namespace std;
class Message{
	protected:
	string text;
	public:
		void setText(string t){
			this->text=t;
		}
		string toString(){
			return text;
		}
			bool ContainsKeyword(const Message& messageObject, const string& keyword){
			return text.find(keyword) != string::npos; 
		}
		void Encoding(){
			for(int i=0;text[i]!='\0';i++){
				int x=text[i];
				x+=32;
				text[i]=x;
			}
		}
};
class SMS:public Message{
	string recipientContactNo;
	public:
		void setContactNo(string s){
			this->recipientContactNo=s;
		}
		string getContactNo(){
			return recipientContactNo;
		}
		string toString(){
			string s;
			s=text + " " + recipientContactNo;
			return s;
		}
};
class Email:public Message{
	string sender;
	string reciever;
	string subject;
	public:
		void setSender(string s){
			this->sender=s;
		}
		string getSender(){
			return sender;
		}
		void setReciever(string r){
			this->reciever=r;
		}
		string getReciever(){
			return this->reciever;
		}
		void setSubject(string s){
			this->subject=s;
		}
		string getSubject(){
			return subject;
		}
		string toString(){
			string s;
			s=text + " " + sender + " " +reciever +" "+subject; 
			return s;
		}
		
};

int main() {
    SMS sms;
    sms.setText("Hello? How Are You");
    sms.setContactNo("123-456-7890");
    cout << "Original SMS: " << sms.toString() << endl;
    sms.Encoding();
    cout << "Encoded SMS: " << sms.toString() << endl;
cout<<"Contain John? "<<(sms.ContainsKeyword(sms,"John")?"Yes":"No");
    Email email;
    email.setText("Meeting at 3 PM");
    email.setSender("abc@gmail.com");
    email.setReciever("xyz@gmail.com");
    email.setSubject("Important Meeting");

    cout << "\nOriginal Email: " << email.toString() << endl;

    email.Encoding();
    cout << "Encoded Email: " << email.toString() << endl;
}