# Lab 2 — Array Operations

Each task is a separate C++ program. Positions start at 1; array indices start at 0. Capacity is 100 integers.

| Task | File | Example input | Expected result |
|---|---|---|---|
| 1. Insertion | array_insertion.cpp | `3 10 20 30 2 15` | Array: 10 15 20 30 |
| 2. Deletion | array_deletion.cpp | `3 10 20 30 2` | Array: 10 30 |
| 3. Searching | array_searching.cpp | `3 10 20 30 20` | Found at position 2 |

Input starts with the size, followed by the array elements. Insertion then takes a position and value; deletion takes a position; searching takes a value.

Insertion shifts elements right, deletion shifts them left, and linear search compares each element. All take O(n) time in the worst case and O(1) extra storage.

**Roman Urdu:** Insertion mein elements right shift kar ke naya number rakhte hain. Deletion mein selected position hata kar baqi elements left shift karte hain. Searching mein har number ko target se compare karte hain. Duplicate numbers hon to tamam matching positions dikhayi jati hain.

Compile one file at a time, for example from the repository root:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic LAB-02/array_insertion.cpp -o insertion
./insertion
```

`array_operations.cpp` is also available as a combined menu for practice.
