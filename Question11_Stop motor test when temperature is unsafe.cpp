#include <iostream>
using namespace std;
int main() {
    float temp = 0;
    while(temp <= 90) {
        cout << "Enter temperature: "; cin >> temp;
    }
    cout << "Motor temperature unsafe. Stop motor test." << endl;
    return 0;
}

