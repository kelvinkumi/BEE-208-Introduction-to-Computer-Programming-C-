#include <iostream>
using namespace std;
int main() {
    float res = 0;
    while(res <= 5) {
        cout << "Enter resistance: "; cin >> res;
    }
    cout << "Earth resistance too high. Improve earthing system." << endl;
    return 0;
}

