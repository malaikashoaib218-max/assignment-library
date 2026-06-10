
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;    
    int powerConsumption;
    int brightness;       
    bool isOn;

public:
    
    SmartDevice() {
        deviceName = "Unknown";
        deviceType = "Generic";
        powerConsumption = 0;
        brightness = 0;
        isOn = false;
    }

    SmartDevice(string name) {
        deviceName = name;
        deviceType = "Generic";
        powerConsumption = 0;
        brightness = 0;
        isOn = false;
    }

    SmartDevice(string name, string type, int watts) {
        deviceName = name;
        deviceType = type;
        powerConsumption = watts;
        brightness = (type == "Light") ? 0 : 50;
        isOn = false;
    }

   
    void setPower(int watts) {
        powerConsumption = watts;
        cout << deviceName << " power set to " << watts << " watts\n";
    }

   
    void setPower(int watts, int hours) {
        powerConsumption = watts;
        cout << deviceName << " power set to " << watts << " watts for "
            << hours << " hours (" << (watts * hours) << " watt-hours)\n";
    }

   
    void setPower(double percentage) {
        if (deviceType == "Light") {
            brightness = percentage;
            powerConsumption = (percentage / 100.0) * 100; 
            cout << deviceName << " brightness set to " << percentage << "%\n";
        }
        else {
            powerConsumption = percentage;
            cout << deviceName << " power percentage set to " << percentage << "%\n";
        }
    }

    int operator+(const SmartDevice& other) {
        return this->powerConsumption + other.powerConsumption;
    }

    
    int operator-(const SmartDevice& other) {
        int diff = this->powerConsumption - other.powerConsumption;
        return (diff < 0) ? -diff : diff; 
    }

    
    bool operator==(const SmartDevice& other) {
        return (this->isOn == true && other.isOn == true);
    }

   
    bool operator<(const SmartDevice& other) {
        return this->powerConsumption < other.powerConsumption;
    }

    
    friend ostream& operator<<(ostream& output, const SmartDevice& d) {
        output << "[ " << d.deviceName << " | " << d.deviceType
            << " | " << (d.isOn ? "ON" : "OFF")
            << " | " << d.powerConsumption << "W";
        if (d.deviceType == "Light") {
            output << " | Brightness: " << d.brightness << "%";
        }
        output << " ]";
        return output;
    }

    
    void turnOn() {
        isOn = true;
        cout << deviceName << " turned ON\n";
    }

    void turnOff() {
        isOn = false;
        cout << deviceName << " turned OFF\n";
    }

    int getPower() { return powerConsumption; }
    string getName() { return deviceName; }
    bool getStatus() { return isOn; }

   
    void showStatus() {
        cout << *this << endl;
    }
};

#endif
