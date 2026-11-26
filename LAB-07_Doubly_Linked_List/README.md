# Doubly Linked List

Create nodes with prev and next links; traverse forward from head and backward from tail; free all nodes.

## Example

File: `doubly_linked_list.cpp`

Input: `3 10 20 30`

Result: `Forward: 10 20 30; Backward: 30 20 10`

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-07_Doubly_Linked_List/doubly_linked_list.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

O(n) creation/traversal/cleanup; O(n) list storage.

**Roman Urdu:** Har node mein previous aur next dono addresses hote hain, is liye dono taraf traverse kar sakte hain.
