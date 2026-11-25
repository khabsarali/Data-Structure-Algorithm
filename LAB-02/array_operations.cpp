#include <iostream>
using namespace std;

const int CAPACITY = 100;

void display(const int a[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) cout << a[i] << ' ';
    cout << '\n';
}

int main() {
    int a[CAPACITY], size;
    cout << "Enter number of elements (0-100): ";
    if (!(cin >> size) || size < 0 || size > CAPACITY) {
        cerr << "Invalid size.\n"; return 1;
    }
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i)
        if (!(cin >> a[i])) { cerr << "Invalid integer.\n"; return 1; }
    while (true) {
        int choice;
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display\n0. Exit\nChoice: ";
        if (!(cin >> choice)) { cerr << "Invalid input.\n"; return 1; }
        if (choice == 0) break;
        if (choice == 1) {
            if (size == CAPACITY) { cout << "Array is full.\n"; continue; }
            int position, value;
            cout << "Enter position (1-" << size + 1 << ") and value: ";
            if (!(cin >> position >> value)) return 1;
            if (position < 1 || position > size + 1) {
                cout << "Invalid position.\n"; continue;
            }
            // Shift right, starting at the last occupied element.
            for (int i = size; i >= position; --i) a[i] = a[i - 1];
            a[position - 1] = value;
            ++size;
            display(a, size);
        } else if (choice == 2) {
            if (size == 0) { cout << "Array is empty.\n"; continue; }
            int position;
            cout << "Enter position to delete (1-" << size << "): ";
            if (!(cin >> position)) return 1;
            if (position < 1 || position > size) {
                cout << "Invalid position.\n"; continue;
            }
            // Shift left to fill the gap.
            for (int i = position - 1; i < size - 1; ++i) a[i] = a[i + 1];
            --size;
            display(a, size);
        } else if (choice == 3) {
            int value; bool found = false;
            cout << "Enter value to search: ";
            if (!(cin >> value)) return 1;
            for (int i = 0; i < size; ++i) {
                if (a[i] == value) {
                    cout << "Found at position " << i + 1 << '\n';
                    found = true;
                }
            }
            if (!found) cout << "Value not found.\n";
        } else if (choice == 4) display(a, size);
        else cout << "Invalid choice.\n";
    }
    return 0;
}
