#include <iostream>
using namespace std;
int main() {
    float val, sum=0; int count=0;
    for(int i=0; i<12; i++) {
        cout << "Reading " << i+1 << ": "; cin >> val;
        if(val == 999) continue;
        sum += val; count++;
    }
    cout << "Average: " << sum/count << endl;
    return 0;
}

