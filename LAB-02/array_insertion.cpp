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
    if (size == CAPACITY) { cerr << "Array is full.\n"; return 1; }
    int position, value;
    cout << "Enter insertion position (1-" << size + 1 << ") and value: ";
    if (!(cin >> position >> value)) { cerr << "Invalid input.\n"; return 1; }
    if (position < 1 || position > size + 1) {
        cerr << "Invalid position.\n"; return 1;
    }
    // Move from right to left to avoid overwriting existing values.
    for (int i = size; i >= position; --i) a[i] = a[i - 1];
    a[position - 1] = value;
    ++size;
    cout << "Array: ";
    for (int i = 0; i < size; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
