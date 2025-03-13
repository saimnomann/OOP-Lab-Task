#include<iostream>
#include<string>
using namespace std;

class Smartphone {
    private:
        string company;
        string model;
        string displayResolution;
        int ram;
        int rom; 
        int storage; 

    public:

        void setCompany(const string &comp) {
            company = comp;
        }

        void setModel(const string &mod) {
            model = mod;
        }

        void setDisplayResolution(const string &resolution) {
            displayResolution = resolution;
        }

        void setRAM(int r) {
            ram = r;
        }

        void setROM(int r) {
            rom = r;
        }

        void setStorage(int s) {
            storage = s;
        }

        string getCompany() const {
            return company;
        }

        string getModel() const {
            return model;
        }

        string getDisplayResolution() const {
            return displayResolution;
        }

        int getRAM() const {
            return ram;
        }

        int getROM() const {
            return rom;
        }

        int getStorage() const {
            return storage;
        }

        void makeCall(const string &phoneNumber) const {
            cout << "Making a phone call to " << phoneNumber << endl;
        }

        void sendMessage(const string &message) const {
            cout << "Sending message: "" "<< message<< endl;
        }

        void connectToWiFi() const {
            cout << "Connecting to WiFi" << endl;
    }

        void browseInternet() const {
            cout << "Browsing the internet" << endl;
        }


        void displayAttributes() const {
            cout << "Company: " << company << endl;
            cout << "Model: " << model << endl;
            cout << "Display Resolution: " << displayResolution << endl;
            cout << "RAM: " << ram << " GB" << endl;
            cout << "ROM: " << rom << " GB" << endl;
            cout << "Storage: " << storage << " GB" << endl;
        }
};

int main() {

    Smartphone phone1;
    Smartphone phone2;

   
    phone1.setCompany("Samsung");
    phone1.setModel("Galaxy S21");
    phone1.setDisplayResolution("2400 x 1080");
    phone1.setRAM(8);
    phone1.setROM(128);
    phone1.setStorage(256);

   
    phone2.setCompany("Apple");
    phone2.setModel("iPhone 14");
    phone2.setDisplayResolution("2532 x 1170");
    phone2.setRAM(6);
    phone2.setROM(128);
    phone2.setStorage(128);

    cout << "Phone 1 Attributes:" << endl;
    phone1.displayAttributes();
    cout << endl;

    cout << "Phone 2 Attributes:" << endl;
    phone2.displayAttributes();
    cout << endl;

    string phoneNumber, message;


    cout << "Enter phone number to call  ";
    cin >> phoneNumber;
    phone1.makeCall(phoneNumber);

    cout << "Enter message to send  ";
    cin.ignore();
    getline(cin, message);
    phone1.sendMessage(message);
    phone1.connectToWiFi();
    phone1.browseInternet();

    cout << "\nEnter phone number to call  ";
    cin >> phoneNumber;
    phone2.makeCall(phoneNumber);

    cout << "Enter message to send  ";
    cin.ignore(); 
    getline(cin, message);
    phone2.sendMessage(message);

    phone2.connectToWiFi();
    phone2.browseInternet();

    return 0;
}

