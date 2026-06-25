#include <iostream>
using namespace std;
int main() {
    float total = 0, watt;
    for(int i=1; i<=12; i++) {
        cout << "Enter wattage for point " << i << ": "; cin >> watt;
        total += watt;
    }
    cout << "Total power: " << total << " W" << endl;
    return 0;
}

