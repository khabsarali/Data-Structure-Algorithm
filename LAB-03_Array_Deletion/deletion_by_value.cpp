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

int main() {
    int a[CAPACITY], size;
    if (!readArray(a, size)) return 1;
    cout << "Original array: "; display(a, size);
    if (size == 0) { cerr << "Array is empty.\n"; return 1; }
    int target;
    cout << "Enter value to delete: ";
    if (!(cin >> target)) { cerr << "Invalid input.\n"; return 1; }
    int index = 0;
    while (index < size && a[index] != target) ++index;
    if (index == size) { cout << "Value not found.\n"; return 0; }
    for (int i = index; i < size - 1; ++i) a[i] = a[i + 1];
    --size;
    cout << "Updated array: "; display(a, size);
    return 0;
}
