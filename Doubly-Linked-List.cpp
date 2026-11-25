#include <iostream>
using namespace std;

// Define node structure
struct Node
{
    int data;
    Node* prev;
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

    // Connect first node
    head->prev = NULL;
    head->next = second;

    // Connect second node
    second->prev = head;
    second->next = third;

    // Connect third node
    third->prev = second;
    third->next = fourth;

    // Connect fourth node
    fourth->prev = third;
    fourth->next = fifth;

    // Connect fifth node
    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward traversal and counting
    Node* temp = head;
    int count = 0;

    cout << "\nForward Traversal:\n";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
        count++;
    }

    cout << "NULL" << endl;

    // Backward traversal
    temp = fifth;

    cout << "\nBackward Traversal:\n";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
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
