# Array Insertion

By value: insert the new element before the first occurrence of an existing target. If the target is absent, leave the array unchanged. By address: select a 1-based position, derive its actual pointer, and insert through that pointer. Address insertion permits the end position size + 1 and an empty array.

## Example

File: `insertion_by_value.cpp`

Input: `3 10 20 30 20 15`

Result: `Updated array: 10 15 20 30`

Address example: compile `insertion_by_address.cpp`; input `3 10 20 30 2 15` gives `Updated array: 10 15 20 30`.

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-02_Array_Insertion/insertion_by_value.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

O(n) time; O(1) auxiliary space.

**Roman Urdu:** Value method mein target number dhoond kar us se pehle naya number rakhte hain. Address method mein position se pointer banate hain aur elements right shift karte hain.
