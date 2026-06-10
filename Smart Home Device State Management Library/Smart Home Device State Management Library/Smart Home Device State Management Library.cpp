
#include "SmartDevice.h"
#include <iostream>
using namespace std;

int main() {
    cout << "\n========== SMART HOME DEVICE MANAGER ==========\n\n";

 
    cout << "--- FUNCTION OVERLOADING DEMO ---\n\n";

    SmartDevice livingLight("Living Room Light", "Light", 60);
    SmartDevice bedFan("Bedroom Fan", "Fan", 75);
    SmartDevice ac("Main AC", "AC", 1500);

    cout << "Device 1: ";
    livingLight.showStatus();
    cout << "Device 2: ";
    bedFan.showStatus();
    cout << "Device 3: ";
    ac.showStatus();

    cout << "\n--- Overloaded setPower() examples ---\n";
    livingLight.setPower(80);           
    livingLight.setPower(50, 4);        
    livingLight.setPower(75.5);         
    cout << endl;

    
    cout << "--- OPERATOR OVERLOADING DEMO ---\n\n";

    
    livingLight.turnOn();
    bedFan.turnOn();
    ac.turnOff();

    cout << "\nAfter operations:\n";
    livingLight.showStatus();
    bedFan.showStatus();
    ac.showStatus();

    int totalPower = livingLight + bedFan;
    cout << "\n(+) Total power of Living Light + Bed Fan: " << totalPower << " watts\n";

    int powerDiff = livingLight - ac;
    cout << "(-) Power difference: " << powerDiff << " watts\n";

    
    cout << "(==) Are Living Light AND Bed Fan both ON? "
        << ((livingLight == bedFan) ? "YES" : "NO") << endl;

    
    cout << "(<)  Is Living Light (<) Main AC? "
        << ((livingLight < ac) ? "Yes, lower power" : "No, higher power") << endl;

    
    cout << "\n(<<) Using stream operator directly: " << livingLight << endl;

   
    cout << "\n--- INTERACTIVE DEMO ---\n";
    SmartDevice myDevice("Smart Plug", "Socket", 0);

    myDevice.setPower(100);
    myDevice.turnOn();
    cout << "Current status: " << myDevice << endl;
    myDevice.turnOff();
    cout << "After turn off: " << myDevice << endl;

    cout << "\n========== DEMO COMPLETE ==========\n";

    return 0;
}