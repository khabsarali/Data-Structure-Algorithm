# Lab 2 — Operations on Arrays

**Task:** Perform insertion, deletion and searching.

| Operation | Steps | Time |
|---|---|---|
| Insert | Validate capacity/position, shift elements right, place value, increase size | O(n) worst case |
| Delete | Validate position, shift remaining elements left, decrease size | O(n) worst case |
| Search | Compare the target with every element and report all matching positions | O(n) |

**Worked example:** Start with `[10, 20, 30]`. Insert 15 at position 2 to get `[10, 15, 20, 30]`. Delete position 3 to get `[10, 15, 30]`. Search for 30: position 3.

**Example input sequence:** `3 10 20 30 1 2 15 2 3 3 30 0`

The first number is the initial size; the next three are elements. Then choose insert (1), supply position/value (2/15), choose delete (2), supply position (3), choose search (3), supply target (30), and exit (0).

**Roman Urdu:** Insertion mein jagah banane ke liye elements right shift hote hain. Deletion mein khaali jagah bharne ke liye left shift hote hain. Searching mein har element ko target se compare karte hain. Position 1 ka matlab array index 0 hai.
