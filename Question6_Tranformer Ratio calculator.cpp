#include <iostream>
using namespace std;
int main() {
    int choice; float pT, sT, pV, sV;
    cout << "1. Turns Ratio, 2. Secondary V, 3. Primary V\nChoice: "; cin >> choice;
    switch(choice) {
        case 1: cout << "Enter Pri Turns and Sec Turns: "; cin >> pT >> sT;
                cout << "Turns Ratio: " << pT/sT << endl; break;
        case 2: cout << "Enter PV, ST, PT: "; cin >> pV >> sT >> pT;
                cout << "Sec Voltage: " << (pV * sT / pT) << " V" << endl; break;
        case 3: cout << "Enter SV, PT, ST: "; cin >> sV >> pT >> sT;
                cout << "Pri Voltage: " << (sV * pT / sT) << " V" << endl; break;
    }
    return 0;
}

