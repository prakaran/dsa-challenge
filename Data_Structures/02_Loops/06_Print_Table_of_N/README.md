# F. Print Table of N

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Your task is to print the multiplication table of \(N\) from \(1\) to \(10\).

## Input
A single integer \(N\) (\(1 \le N \le 100\)).

## Output
Print the table of \(N\) in the format shown in the example below.

## Examples

### Example 1
**Input:**
```text
6
```

**Output:**
```text
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — The loop always runs exactly 10 times regardless of the input value of $N$.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional data structures are used.

### 💡 Format Matching Tip
Pay close attention to the spaces in the required output format: `N * i = result`. Missing a space around the `*` or `=` operators will cause a **Wrong Answer (WA)** status on competitive programming platforms.

```cpp
for (int i = 1; i <= 10; ++i) {
    std::cout << N << " * " << i << " = " << (N * i) << "\n";
}
```
