#include <iostream>
using namespace std;

const int CAPACITY = 100;

bool readArray(int a[], int& size) {
    cout << "Enter size (0-100): ";
    if (!(cin >> size) || size < 0 || size > CAPACITY) {
        cerr << "Invalid size.\n"; return false;
    }
    cout << "Enter integers: ";
    for (int i = 0; i < size; ++i) {
        if (!(cin >> a[i])) { cerr << "Invalid integer.\n"; return false; }
    }
    return true;
}

void display(const int a[], int size) {
    for (int i = 0; i < size; ++i) cout << a[i] << ' ';
    cout << '\n';
}

// address must point into this array, including its insertion end position.
void insertAtAddress(int a[], int& size, int* address, int value) {
    // Work backward so shifting does not overwrite values still needed.
    for (int* current = a + size; current != address; --current)
        *current = *(current - 1);
    *address = value;
    ++size;
}

int main() {
    int a[CAPACITY], size;
    if (!readArray(a, size)) return 1;
    cout << "Original array: "; display(a, size);
    if (size == CAPACITY) { cerr << "Array is full.\n"; return 1; }
    int position, value;
    cout << "Enter position (1-" << size + 1 << ") and new value: ";
    if (!(cin >> position >> value)) { cerr << "Invalid input.\n"; return 1; }
    if (position < 1 || position > size + 1) {
        cerr << "Invalid position.\n"; return 1;
    }
    // Derive a valid address from a checked position rather than reading a raw pointer.
    int* address = a + position - 1;
    cout << "Insertion address: " << static_cast<void*>(address) << '\n';
    insertAtAddress(a, size, address, value);
    cout << "Updated array: "; display(a, size);
    return 0;
}
