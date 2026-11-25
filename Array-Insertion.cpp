#include <iostream>
using namespace std;

void display(const int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, position;
    cout << "Original array: ";
    display(arr, n);
    int value;
    cout << "Enter position (1 to " << n + 1 << "): ";
    if (!(cin >> position) || position < 1 || position > n + 1 || n >= 100) {
        cout << "Invalid position or array is full." << endl;
        return 1;
    }
    cout << "Enter new element: ";
    if (!(cin >> value)) return 1;

    // Shift elements to the right to make space.
    for (int i = n; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = value;
    n++;
    cout << "Updated array after insertion: ";
    display(arr, n);
    return 0;
}
