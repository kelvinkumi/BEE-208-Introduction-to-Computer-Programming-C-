#include <iostream>
using namespace std;
int main() {
    char cont;
    do {
        float v, i;
        cout << "V and I: "; cin >> v >> i;
        cout << "Power: " << v*i << " W" << endl;
        cout << "Continue? (Y): "; cin >> cont;
    } while(cont == 'Y' || cont == 'y');
    return 0;
}

