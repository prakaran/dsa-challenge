# E. Print All Uppercase Alphabets

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
Print all uppercase English alphabets from A to Z using loops.

## Input
There is no input for this problem.

## Output
Print all uppercase English alphabets from A to Z, separated by spaces.

## Examples

### Example 1
**Input:**
```text
There is no input.
```

**Output:**
```text
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — The loop always runs exactly 26 times, which takes constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory is allocated.

### 💡 Implementation Tip
In C++, character types (`char`) are stored internally as integer ASCII values. This means you can use a `char` directly as a loop counter variable and increment it just like a number.

```cpp
for (char ch = 'A'; ch <= 'Z'; ++ch) {
    std::cout << ch << (ch == 'Z' ? "" : " ");
}
```
