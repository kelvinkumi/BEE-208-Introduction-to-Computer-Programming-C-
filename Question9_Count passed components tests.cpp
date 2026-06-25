#include <iostream>
using namespace std;
int main() {
    int pass=0, fail=0, res;
    for(int i=0; i<15; i++) {
        cout << "Component " << i+1 << " (1=Pass, 0=Fail): "; cin >> res;
        if(res == 1) pass++; else fail++;
    }
    cout << "Passed: " << pass << ", Failed: " << fail << endl;
    return 0;
}

