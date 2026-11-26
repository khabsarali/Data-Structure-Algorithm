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

// address must point to an occupied element in this array.
void deleteAtAddress(int a[], int& size, int* address) {
    for (int* current = address; current + 1 < a + size; ++current)
        *current = *(current + 1);
    --size;
}

int main() {
    int a[CAPACITY], size;
    if (!readArray(a, size)) return 1;
    cout << "Original array: "; display(a, size);
    if (size == 0) { cerr << "Array is empty.\n"; return 1; }
    int position;
    cout << "Enter position to delete (1-" << size << "): ";
    if (!(cin >> position)) { cerr << "Invalid input.\n"; return 1; }
    if (position < 1 || position > size) {
        cerr << "Invalid position.\n"; return 1;
    }
    int* address = a + position - 1;
    cout << "Deletion address: " << static_cast<void*>(address) << '\n';
    deleteAtAddress(a, size, address);
    cout << "Updated array: "; display(a, size);
    return 0;
}
