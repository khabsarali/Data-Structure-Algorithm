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
    if (size == 0) { cerr << "Array is empty.\n"; return 1; }
    int position;
    cout << "Enter deletion position (1-" << size << "): ";
    if (!(cin >> position)) { cerr << "Invalid input.\n"; return 1; }
    if (position < 1 || position > size) {
        cerr << "Invalid position.\n"; return 1;
    }
    // Shift later elements one place left to fill the gap.
    for (int i = position - 1; i < size - 1; ++i) a[i] = a[i + 1];
    --size;
    cout << "Array: ";
    for (int i = 0; i < size; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
