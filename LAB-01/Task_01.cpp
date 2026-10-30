#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int s = 5;
    int index = 2;
    int value = 25;

    for (int i = s; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    s++;

    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}