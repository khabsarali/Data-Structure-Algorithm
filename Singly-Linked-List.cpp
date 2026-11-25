#include <iostream>
using namespace std;

// Define node structure
struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Create five nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Take input from user
    cout << "Enter five integer values: ";
    cin >> head->data >> second->data
        >> third->data >> fourth->data
        >> fifth->data;

    // Connect all five nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    // Traverse and count nodes
    Node* temp = head;
    int count = 0;

    cout << "\nLinked List:\n";

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "\nTotal Nodes: " << count << endl;

    // Release allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
