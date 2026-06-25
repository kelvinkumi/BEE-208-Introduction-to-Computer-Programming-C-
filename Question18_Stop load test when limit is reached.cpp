#include <iostream>
using namespace std;
int main() {
    float total = 0, p;
    for(int i=1; i<=20; i++) {
        cout << "Appliance " << i << " power: "; cin >> p;
        total += p;
        if(total > 5000) { cout << "Max load exceeded. Final total: " << total << " W" << endl; break; }
    }
    return 0;
}

