#include <iostream>
using namespace std;

int main() {
    const int CAPACITY = 100;
    int numbers[CAPACITY], size;
    cout << "Enter number of elements (0-100): ";
    if (!(cin >> size) || size < 0 || size > CAPACITY) {
        cerr << "Invalid size.\n"; return 1;
    }
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        if (!(cin >> numbers[i])) { cerr << "Invalid integer.\n"; return 1; }
    }
    cout << "Array: ";
    for (int i = 0; i < size; ++i) cout << numbers[i] << ' ';
    cout << '\n';
    return 0;
}
