#include<iostream>
using namespace std;
class Stationary{
	string item[100];
	int price[100];
	int size;
	public:
	Stationary(){
	 size=0;
	}
		void addItem(string Item,int p){
		
			item[size]=Item;
			price[size]=p;
			size++;
			cout<<"Item Added Successfully"<<endl;
		}
		void editItem(string Item,int new_p){
			int i;
			for(i=0;i<size;i++)
			{
				if(item[i]==Item){
					price[i]=new_p;
					cout<<"Price Changed Successfully"<<endl;
				}
			}
		}
		void displayItem(){
			for(int i=0;i<size;i++){
			cout<<i+1<<") "<<item[i]<<" Price: "<<price[i]<<endl;
			}
		}
	 void createReceipt() {
      string customerItems[100]; 
    int quantities[100];       
    float totalAmount = 0;  
    int n;
    cout << "\nEnter the number of items the customer bought: ";
    cin >> n;
    if (n > 0) {
        cout << "\nEnter the item names and quantities bought by the customer:" << endl;
            for (int i = 0; i < n; i++) {
                cout << "Item " << i + 1 << ": ";
                cin.ignore();
                getline(cin, customerItems[i]);
                cout << "Quantity: ";
                cin >> quantities[i];
                bool itemFound = false;
                for (int j = 0; j <size; j++) {
                    if (item[j] == customerItems[i]) {
                        totalAmount += price[j] * quantities[i];
                        itemFound = true;
                        break;
                    }
                }
                if (!itemFound) {
                    cout << "Item not found in the inventory!" << endl;
                }
            }
            cout << "\nReceipt:" << endl;
            for (int i = 0; i < n; i++) {
                float itemTotal = 0;
                for (int j = 0; j < size; j++) {
                    if (item[j] == customerItems[i]) {
                        itemTotal = price[j] * quantities[i];
                        cout << "Item: " << customerItems[i] << ", Quantity: " << quantities[i] 
                             << ", Total: " << itemTotal << endl;
                    }
                }
            }
            cout << "Total Amount: " << totalAmount << endl;
        } else {
            cout << "No items purchased." << endl;
        }
    }
};

int main(){
	Stationary s;
	int choice,price;
	string item;
while(1){
cout <<"Stationary Shop Menu:" << endl;
        cout << "1. Add item and its price" << endl;
        cout << "2. Display all items" << endl;
        cout << "3. Edit item price" << endl;
        cout << "4. Create receipt" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;	
	
        if(choice==1){
        	cout<<"Enter Item Name ";
        	cin.ignore();
        getline(cin,item);
        cout<<"Enter Item Price ";
        cin>>price;
        s.addItem(item,price);
		}
		else if(choice==2){
			s.displayItem();
		}
		else if(choice ==3){
			cout<<"Enter Item Name ";
			cin.ignore();
			getline(cin,item);
			cout<<"Enter New Price ";
			cin>>price;
			s.editItem(item,price);
		}
		else if(choice==4){
			s.createReceipt();
		}
		else if(choice==5){
		break;
		}
		else{
			cout<<"Invalid Choice "<<endl;
		}
	}
}
