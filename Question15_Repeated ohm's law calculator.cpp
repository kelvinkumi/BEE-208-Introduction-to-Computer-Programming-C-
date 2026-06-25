#include <iostream>
using namespace std;
int main() {
    char cont;
    do {
        float v, i;
        cout << "V and I: "; cin >> v >> i;
        cout << "Resistance: " << v/i << " Ohms" << endl;
        cout << "Continue? (Y/N): "; cin >> cont;
    } while(cont != 'N' && cont != 'n');
    return 0;
}

