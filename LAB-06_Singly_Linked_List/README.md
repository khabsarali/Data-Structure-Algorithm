# Singly Linked List

Create nodes from user input, append using a tail pointer, traverse forward, then free every node.

## Example

File: `singly_linked_list.cpp`

Input: `3 10 20 30`

Result: `Forward: 10 20 30`

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-06_Singly_Linked_List/singly_linked_list.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

O(n) creation/traversal/cleanup; O(n) list storage.

**Roman Urdu:** Har node mein data aur aglay node ka address hota hai. Head se start kar ke next pointer follow karte hain.
