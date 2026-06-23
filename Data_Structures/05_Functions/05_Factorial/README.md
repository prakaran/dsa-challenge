# E. Factorial

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\).

Find the factorial of \(N\) by writing a function that takes \(N\) as a parameter and returns \(N!\), where:
\[N! = 1 \times 2 \times 3 \times \dots \times N\]

## Input
The first line contains an integer \(N\) (\(0 \le N \le 20\)).

## Output
Print the value of \(N!\).

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
120
```

### Example 2
**Input:**
```text
7
```

**Output:**
```text
5040
```

## Note
By definition, $0! = 1$.
The constraint $N \le 20$ ensures the answer fits in a 64-bit integer.

---

## My Solution Notes
* **Data Type:** You **must** use a 64-bit integer (`long long` in C++) because $20!$ equals $2,432,902,008,176,640,000$, which overflows a standard 32-bit `int`.
* **Edge Cases:** Ensure the function correctly returns `1` when $N = 0$.
* **Time Complexity:** $\mathcal{O}(N)$ — A simple iterative loop from $1$ to $N$.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single variable is needed to accumulate the product.
