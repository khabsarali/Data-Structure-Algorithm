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
    return 0;
}
