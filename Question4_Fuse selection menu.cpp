#include <iostream>
using namespace std;
int main() {
    int choice; float val;
    cout << "1. V to mV, 2. A to mA, 3. kW to W, 4. Ohm to kOhm\nChoice: "; cin >> choice;
    cout << "Enter value: "; cin >> val;
    switch(choice) {
        case 1: cout << val << " V = " << val * 1000 << " mV" << endl; break;
        case 2: cout << val << " A = " << val * 1000 << " mA" << endl; break;
        case 3: cout << val << " kW = " << val * 1000 << " W" << endl; break;
        case 4: cout << val << " Ohm = " << val / 1000 << " kOhm" << endl; break;
    }
    return 0;
}

