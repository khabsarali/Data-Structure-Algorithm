#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void clearList(Node*& head) {
    while (head != nullptr) {
        Node* old = head;
        head = head->next;
        delete old;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int count;
    cout << "Enter number of nodes: ";
    if (!(cin >> count) || count < 0) { cerr << "Invalid count.\n"; return 1; }
    cout << "Enter values: ";
    for (int i = 0; i < count; ++i) {
        int value;
        if (!(cin >> value)) {
            cerr << "Invalid integer.\n";
            clearList(head);
            return 1;
        }
        Node* node = new Node{value, tail, nullptr};
        if (tail != nullptr) tail->next = node;
        else head = node;
        tail = node;
    }
    cout << "Forward: ";
    for (Node* current = head; current != nullptr; current = current->next)
        cout << current->data << ' ';
    cout << '\n';
    cout << "Backward: ";
    for (Node* current = tail; current != nullptr; current = current->prev)
        cout << current->data << ' ';
    cout << '\n';
    clearList(head);
    tail = nullptr;
    return 0;
}
