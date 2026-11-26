# Binary Search

Use ascending (nondecreasing) input. Unsorted input is rejected. Repeatedly halve the search range and return the first matching 1-based position.

## Example

File: `binary_search.cpp`

Input: `5 10 20 20 30 40 20`

Result: `Found at position 2`

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-05_Binary_Search/binary_search.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

Search: O(log n); input and sortedness validation: O(n); total program: O(n). O(1) auxiliary space.

**Roman Urdu:** Sorted array ka middle check karte hain. Target chhota ho to left aur bara ho to right side dhoondte hain.
