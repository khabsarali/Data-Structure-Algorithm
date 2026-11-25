# Lab 3 — Linked Lists

**Task:** Create singly and doubly linked lists and demonstrate traversal.

| List | Node members | Traversal |
|---|---|---|
| Singly | data, next | Forward from head |
| Doubly | data, prev, next | Forward from head and backward from tail |

Read a node count and values. Allocate each node, connect it to the previous tail, then update the tail. The first node becomes the head. The last node's next pointer is nullptr; in a doubly linked list the head's prev is also nullptr.

**Example input for either program:** `3 10 20 30`

**Singly result:** `Forward: 10 20 30`

**Doubly result:** `Forward: 10 20 30` and `Backward: 30 20 10`.

**Roman Urdu:** Node ek box ki tarah hai jisme value aur aglay node ka address hota hai. Singly list mein sirf agay ja sakte hain. Doubly list mein pichlay node ka address bhi hota hai, is liye dono taraf traverse kar sakte hain. Head pehla aur tail aakhri node hai. End par delete se memory free karte hain.

Creating/traversing/freeing n nodes: O(n) time. List storage: O(n). Each append uses the tail and takes O(1).
