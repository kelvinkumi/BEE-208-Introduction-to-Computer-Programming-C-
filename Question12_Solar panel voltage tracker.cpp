#include <iostream>
using namespace std;
int main() {
    float v = 18;
    while(v >= 18) {
        cout << "Enter voltage: "; cin >> v;
    }
    cout << "Solar panel voltage below operating level." << endl;
    return 0;
}

