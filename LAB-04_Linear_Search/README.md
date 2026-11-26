# Linear Search

Scan every element and report all matching 1-based positions. Input may be unsorted.

## Example

File: `linear_search.cpp`

Input: `3 10 20 30 20`

Result: `Found at position 2`

Input begins with size/count followed by elements, then task-specific target/position values. Array positions start at 1. Pointer addresses vary per run.

## Compile and run

From the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-04_Linear_Search/linear_search.cpp -o lab
./lab
```

Compile each file separately. On Windows, use `lab.exe` as output and run `./lab.exe`.

## Complexity

O(n) time; O(1) auxiliary space.

**Roman Urdu:** Har number ko target se compare karte hain. Match ho to uski position batate hain.
