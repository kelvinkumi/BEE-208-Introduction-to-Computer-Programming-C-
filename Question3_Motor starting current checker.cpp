#include <iostream>
using namespace std;
int main() {
    float rated, start;
    cout << "Enter rated current: "; cin >> rated;
    cout << "Enter starting current: "; cin >> start;
    if (start > (3 * rated)) cout << "High starting current. Use proper motor starter." << endl;
    else cout << "Starting current is acceptable." << endl;
    return 0;
}

