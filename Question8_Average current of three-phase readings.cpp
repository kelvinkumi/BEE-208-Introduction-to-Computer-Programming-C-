#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=6; i++) {
        float l1, l2, l3;
        cout << "Set " << i << " (L1 L2 L3): "; cin >> l1 >> l2 >> l3;
        cout << "Average: " << (l1+l2+l3)/3 << " A" << endl;
    }
    return 0;
}

