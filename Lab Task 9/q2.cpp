#include<iostream>
using namespace std;
class SmartClass{
	protected:
	bool status;
public:
	virtual void turnOn()=0;
	virtual void turnOff()=0;
	virtual void getStatus()=0;
	
};
class LightBulb:public SmartClass{
    int brightness;
public:
    LightBulb() {
        status = false;
        brightness = 100;
    }

    void turnOn() {
        status = true;
        cout << "LightBulb turned ON. Brightness: " << brightness << "%" << endl;
    }

    void turnOff() override {
        status = false;
        cout << "LightBulb turned OFF." << endl;
    }

    void getStatus() override {
        cout << "LightBulb is " << (status ? "ON" : "OFF")
             << " | Brightness: " << brightness << "%" << endl;
    }

    void setBrightness(int b) {
        if (b >= 0 && b <= 100) {
            brightness = b;
            cout << "Brightness set to " << brightness << "%" << endl;
        } else {
            cout << "Invalid brightness level!" << endl;
        }
    }
};
class Thermostat : public SmartClass {
    double temperature;
public:
    Thermostat() {
        status = false;
        temperature = 24.0;
    }

    void turnOn()  {
        status = true;
        cout << "Thermostat turned ON. Temperature: " << temperature << "C" << endl;
    }

    void turnOff()  {
        status = false;
        cout << "Thermostat turned OFF." << endl;
    }

    void getStatus() override {
        cout << "Thermostat is " << (status ? "ON" : "OFF")
             << " | Temperature: " << temperature << "C" << endl;
    }
    void setTemperature(double temp) {
        temperature = temp;
        cout << "Temperature set to " << temperature << "°C" << endl;
    }
};

int main() {
    LightBulb bulb;
    Thermostat therm;
     bulb.turnOn();
    therm.turnOn();
    bulb.getStatus();
    therm.getStatus();
    bulb.turnOff();
    therm.turnOff();
    bulb.getStatus();
    therm.getStatus();
};
