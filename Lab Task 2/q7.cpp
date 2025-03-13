#include<iostream>
using namespace std;
struct Product{
	int id;
	string name;
	int price;
	int quant;
	bool available; 
};
void addProduct(struct Product &p);
void updateProduct(Product p[], int id, int n);
void removeProduct(Product p[], int &n, int id);
void showProduct(Product p[],int id,int n);
int main(){
	int n,choice;
	int id;
	cout<<"How many Product you want to add ";
	cin>>n;
	struct Product p[n];
	for(int i=0;i<n;i++){
		addProduct(p[i]);
	}
	while(1){
		cout<<"Choose an option: "<<endl;
		cout<<"1. Show Product: "<<endl;
		cout<<"2. Update Product: "<<endl;
		cout<<"3. Remove Product: "<<endl;
		cout<<"4. Exit"<<endl;
		cin>>choice;
		if(choice==1){
			cout<<"Enter Product Id you want to display ";
			cin>>id;
		showProduct(p,id,n);
		}
		else if(choice ==2){
			cout<<"Enter Product ID to update: ";
			cin>>id;
			updateProduct(p,id,n);
		}
		else if(choice ==3){
			cout<<"Enter Product Id you want to remove: ";
			cin>>id;
			removeProduct(p,n,id);
		}
		else if(choice ==4){
			break;
		}
		else{
			cout<<"Invalid Choice"<<endl;
		}
	}
}
void addProduct(struct Product &p){
	cout<<"Enter Product Id: ";
	cin>>p.id;
	cout<<"Enter Product Name: ";
	cin>>p.name;
	cout<<"Enter Product Price: ";
	cin>>p.price;
	cout<<"Enter Product Quantity: ";
	cin>>p.quant;
	if(p.quant>0){
		p.available=true;
	}
	else{
		p.available=false;
	}
}
void showProduct(Product p[],int id,int n){
	int temp=0;
	for(int i=0;i<n;i++){
		if(p[i].id==id){
			cout<<"Product Id: "<<p[i].id<<endl;
			cout<<"Product Name: "<<p[i].name<<endl;
			cout<<"Product Price $: "<<p[i].price<<endl;
			cout<<"Product Quantity: "<<p[i].quant<<endl;
			cout<<"Product Available: "<<(p[i].available?"Yes":"No")<<endl;
			temp=0;
			break;
		}
		else{
			temp=1;
		}
	}
	if(temp==1){
	cout<<"Product Not Found!"<<endl;
	}
}
void updateProduct(Product p[], int id, int n) {
int temp=0;
  for (int i = 0; i < n; i++) {
    if (p[i].id == id) {	
    int choice;
    cout << "\nWhat do you want to update?\n";
    cout << "1. Price\n2. Quantity\n3. Both\nEnter choice: ";
    cin >> choice;
    if (choice == 1) {
    cout << "Enter new price: ";
    cin >> p[i].price;
    } 
    else if (choice == 2) {
    cout << "Enter new quantity: ";
    cin >> p[i].quant;
     if(p[i].quant>0){
    p[i].available=true;
	}
	else{
		p[i].available=false;
	}
    } 
    else if (choice == 3) {
    cout << "Enter new price: ";
    cin >> p[i].price;
    cout << "Enter new quantity: ";
    cin >> p[i].quant;
    if(p[i].quant>0){
    p[i].available=true;
	}
	else{
		p[i].available=false;
	}
    } 
    else {
    cout << "Invalid choice!\n";
}
    cout << "Product updated successfully!\n";
    cout << "New Price: $" << p[i].price << "\n";
    cout << "New Quantity: " << p[i].quant << "\n";
    cout << "Available: " << (p[i].available ? "Yes" : "No") << endl;
    temp=0;
    break;
}
else{
   	temp=1;
}
}
if(temp==1){
	cout<<"Product Not Found"<<endl;
	}}
    void removeProduct(Product p[], int &n, int id) {
    int index = -1;
    for (int i = 0; i < n; i++) {
    if (p[i].id == id) {
    index = i;
    break;
    }
    }
    if (index == -1) {
	cout << "Product with ID " << id << " not found.\n";
    }
    for (int i = index; i < n - 1; i++) {
    p[i] = p[i + 1];
    }
     n--; 
    cout << "Product with ID " << id << " has been removed successfully.\n";
}