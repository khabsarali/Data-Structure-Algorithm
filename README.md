# Data-Structure-Algorithm
A repository for Data Structures and Algorithms lab tasks and implementations.

---

## Lab 01: Array Operations

### Task 1: Insert an Element at a Specific Index

#### Problem Statement
Given an array of integers with an initial capacity and current size, insert a new element at a specified target index by shifting subsequent elements to the right.

#### Source Code
File: [`LAB-01/Task_01.cpp`](LAB-01/Task_01.cpp)

#### Algorithm & Logic
1. **Initialize Array & Variables**:
   - `arr[10] = {10, 20, 30, 40, 50}` (capacity = 10, current size `s = 5`).
   - `index = 2` (target index where new element will be placed).
   - `value = 25` (value to be inserted).
2. **Right-Shift Elements**:
   - Loop backwards from `i = s` down to `i > index` (i.e. `i = 5`, `4`, `3`):
     - `arr[i] = arr[i - 1]`
     - Shifts elements at index 2, 3, and 4 one slot to the right, vacating index 2 without losing existing data.
3. **Insert New Value**:
   - Set `arr[index] = value` (`arr[2] = 25`).
4. **Update Size**:
   - Increment size `s++` (`s = 6`).
5. **Display Array**:
   - Loop from `0` to `s - 1` and print each element separated by a space.

#### Trace / Dry Run
| Step | Action | Array State |
| :--- | :--- | :--- |
| **Initial** | Size = 5 | `[10, 20, 30, 40, 50, _, _, _, _, _]` |
| `i = 5` | Shift `arr[4]` (50) to `arr[5]` | `[10, 20, 30, 40, 50, 50, _, _, _, _]` |
| `i = 4` | Shift `arr[3]` (40) to `arr[4]` | `[10, 20, 30, 40, 40, 50, _, _, _, _]` |
| `i = 3` | Shift `arr[2]` (30) to `arr[3]` | `[10, 20, 30, 30, 40, 50, _, _, _, _]` |
| **Insert** | `arr[2] = 25` | `[10, 20, 25, 30, 40, 50, _, _, _, _]` |
| **Final** | Size = 6 | `[10, 20, 25, 30, 40, 50]` |

#### Program Output
```text
10 20 25 30 40 50 
```

#### Complexity Analysis
- **Time Complexity**:
  - Best Case: $O(1)$ (inserting at index = $s$, no shifting required)
  - Worst Case: $O(n)$ (inserting at index = 0, shifting all $n$ elements)
  - Average Case: $O(n)$
- **Auxiliary Space Complexity**: $O(1)$ (in-place operation)

---

### Task 2: Delete an Element by Value

#### Problem Statement
Given an array of integers, search for a user-specified value. If the value is present, delete its first occurrence by left-shifting all subsequent elements and decrementing the array size. If not found, display an appropriate message.

#### Source Code
File: [`LAB-01/Task_02.cpp`](LAB-01/Task_02.cpp)

#### Algorithm & Logic
1. **Initialize Array & Variables**:
   - `arr[10] = {10, 20, 30, 40, 50}`, size = `5`.
   - Prompt the user to enter `num` (the value to delete).
   - Set `index = -1` (sentinel value).
2. **Search for Value (Linear Search)**:
   - Traverse the array from `i = 0` to `size - 1`.
   - If `arr[i] == num`, record `index = i` and `break`.
3. **Handle Value Not Found**:
   - If `index == -1`, display `"Number not found!"`.
4. **Left-Shift Elements**:
   - If found, shift elements starting from `index` up to `size - 2`:
     - `arr[i] = arr[i + 1]`
     - Overwrites the deleted element and pulls every subsequent element one position to the left.
5. **Update Size & Display**:
   - Decrement `size--`.
   - Print the updated array.

#### Complexity Analysis
- **Time Complexity**:
  - Linear Search: $O(n)$
  - Left Shifting: $O(n)$
  - Total Time: $O(n)$
- **Auxiliary Space Complexity**: $O(1)$ (in-place)

