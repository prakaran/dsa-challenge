# D. Print from L to R

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(L\) and \(R\). Print all integers from \(L\) to \(R\) in increasing order.

## Input
The first line contains two integers \(L\) and \(R\) (\(-10^5 \le L \le R \le 10^5\)).

## Output
Print all integers from \(L\) to \(R\), separated by spaces.

## Examples

### Example 1
**Input:**
```text
3 7
```

**Output:**
```text
3 4 5 6 7
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(R - L + 1)$ — The loop runs exactly for the number of elements in the range, which is at most $2 \cdot 10^5$ iterations. This easily fits within the 1-second time limit.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra space is required as numbers are printed directly to the output stream.

### ⚠️ Key Considerations
1. **Negative Numbers:** Note that $L$ and $R$ can be negative (down to $-10^5$). Your loop counter and data types must support negative values. Standard `int` handles this perfectly.
2. **Spacing Logic:** Ensure there is no trailing space at the very end of the line if your online judge is strict, though standard separation with a trailing space is usually accepted on Codeforces.

```cpp
for (int i = L; i <= R; ++i) {
    std::cout << i << (i == R ? "" : " ");
}
```
