#include <iostream>
using namespace std;
int main() {
    float val, sum=0;
    for(int i=0; i<10; i++) {
        cout << "Reading " << i+1 << ": "; cin >> val;
        if(val < 0) { cout << "Invalid reading skipped." << endl; continue; }
        sum += val;
    }
    cout << "Total valid power: " << sum << " W" << endl;
    return 0;
}

