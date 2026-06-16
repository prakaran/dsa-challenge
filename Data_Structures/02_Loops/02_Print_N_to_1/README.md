# B. Print N to 1

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print all integers from \(N\) to \(1\) in decreasing order.

## Input
The input contains a single integer \(N\).

## Output
Print \(N\) integers from \(N\) to \(1\), separated by spaces. 

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
5 4 3 2 1
```

### Example 2
**Input:**
```text
4
```

**Output:**
```text
4 3 2 1
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The program uses a single loop that counts down from $N$ to $1$.
* **Space Complexity:** $\mathcal{O}(1)$ — The integers are printed on the fly, requiring no extra memory storage.

### ⚠️ Competitive Programming Tip
Notice that unlike the previous problem, the integers here must be **separated by spaces** on a single line rather than newlines. 

To avoid trailing space issues that some strict online judges penalize, you can use a conditional check inside your loop or handle the first/last element separately:
```cpp
for (int i = N; i >= 1; --i) {
    std::cout << i << (i == 1 ? "" : " ");
}
```
