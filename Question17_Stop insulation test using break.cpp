#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=10; i++) {
        float r; cout << "Reading " << i << ": "; cin >> r;
        if(r < 1) { cout << "Insulation failure detected. Test stopped."; break; }
        else cout << "Insulation reading acceptable." << endl;
    }
    return 0;
}

