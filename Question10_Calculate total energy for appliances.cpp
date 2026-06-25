#include <iostream>
using namespace std;
int main() {
    float totalEnergy = 0, p, t;
    for(int i=0; i<8; i++) {
        cout << "Appliance " << i+1 << " (Power, Time): "; cin >> p >> t;
        totalEnergy += (p * t);
    }
    cout << "Total energy: " << totalEnergy << " Wh" << endl;
    return 0;
}

