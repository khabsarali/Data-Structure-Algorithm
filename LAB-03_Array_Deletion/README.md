# Array Deletion

By value: delete only the first occurrence of the target. If absent, leave the array unchanged. By address: select a 1-based occupied position and delete through its actual pointer. Shift later elements left.

## Example

File: `deletion_by_value.cpp`

Input: `3 10 20 30 20`

Result: `Updated array: 10 30`

Address example: compile `deletion_by_address.cpp`; input `3 10 20 30 2` gives `Updated array: 10 30`.

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-03_Array_Deletion/deletion_by_value.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

O(n) time; O(1) auxiliary space.

**Roman Urdu:** Value method mein pehla matching number delete hota hai. Address method mein pointer wali jagah ka number delete hota hai. Baqi elements left shift hote hain.
