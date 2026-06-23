# H. Count Zeros

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a non-negative integer N.

Find the number of digits equal to 0 in the decimal representation of N by writing a function that takes N as a parameter and returns the count of zero digits.

## Input
The only line contains an integer N (0 ≤ N ≤ 10¹⁸).

## Output
Print a single integer — the count of zeros in N.

## Examples

### Example 1
**Input:**
```text
102030
```

**Output:**
```text
3
```

### Example 2
**Input:**
```text
0
```

**Output:**
```text
1
```

---

## My Solution Notes
* **Data Type:** You **must** use a 64-bit integer (`long long` in C++) because $N \le 10^{18}$ exceeds the capacity of a standard 32-bit signed integer ($\approx 2 \times 10^9$).
* **Edge Cases:** Pay special attention to $N = 0$. A standard loop extracting digits with `N % 10` may terminate immediately if not handled, failing to count the single zero.
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ — The code isolates each decimal digit by repeatedly dividing the value by 10. For $N \le 10^{18}$, this executes at most 19 times.
* **Space Complexity:** $\mathcal{O}(1)$ — The verification requires only a few tracking variables.
