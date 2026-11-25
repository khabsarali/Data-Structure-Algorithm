#include <iostream>
using namespace std;

int main() {
    const int CAPACITY = 100;
    int a[CAPACITY], size;
    cout << "Enter size (0-100): ";
    if (!(cin >> size) || size < 0 || size > CAPACITY) {
        cerr << "Invalid size.\n"; return 1;
    }
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        if (!(cin >> a[i])) { cerr << "Invalid integer.\n"; return 1; }
    }
    int target;
    cout << "Enter search value: ";
    if (!(cin >> target)) { cerr << "Invalid input.\n"; return 1; }
    bool found = false;
    // Linear search also reports duplicate matches.
    for (int i = 0; i < size; ++i) {
        if (a[i] == target) {
            cout << "Found at position " << i + 1 << '\n';
            found = true;
        }
    }
    if (!found) cout << "Value not found.\n";
    cout << "Array: ";
    for (int i = 0; i < size; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
