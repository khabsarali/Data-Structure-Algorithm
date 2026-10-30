#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int num;

    cout << "Enter number to delete: ";
    cin >> num;

    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Number not found!";
    } else {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        cout << "Array after deletion: ";

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}