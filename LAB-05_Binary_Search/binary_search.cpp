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
    // Binary search requires nondecreasing input; reject unsorted arrays.
    for (int i = 1; i < size; ++i) {
        if (a[i] < a[i - 1]) {
            cerr << "Array must be sorted in ascending order.\n"; return 1;
        }
    }
    int target;
    cout << "Enter search value: ";
    if (!(cin >> target)) { cerr << "Invalid input.\n"; return 1; }
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (a[middle] == target) {
            result = middle;
            high = middle - 1; // Continue left to find the first duplicate.
        } else if (a[middle] < target) low = middle + 1;
        else high = middle - 1;
    }
    if (result == -1) cout << "Value not found.\n";
    else cout << "Found at position " << result + 1 << '\n';
    return 0;
}
