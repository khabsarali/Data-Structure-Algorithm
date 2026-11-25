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
    cout << "Enter position (1 to " << n << "): ";
    if (!(cin >> position) || position < 1 || position > n) {
        cout << "Invalid position." << endl;
        return 1;
    }

    // Shift elements to the left to remove the selected element.
    for (int i = position - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
    cout << "Updated array after deletion: ";
    display(arr, n);
    return 0;
}
