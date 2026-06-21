# G. Count Zeros

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a non-negative integer \(N\). Your task is to find the total number of digits equal to `0` in the decimal representation of \(N\).

## Input
The only line contains an integer \(N\) (\(0 \le N \le 10^{18}\)).

## Output
Print a single integer — the count of zeros in \(N\).

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
* **Data Type Warning:** The upper bound of \(N\) is $10^{18}$. This exceeds the maximum limit of a standard 32-bit signed integer (`int` in C++). You must use a 64-bit integer type like `long long` in C++ to prevent integer overflow.
* **String Approach (Recommended):** Since you only need to count a specific character, reading the input directly as a `std::string` or Python string bypasses data type size limitations. You can then simply count occurrences of the character `'0'`.
* **Mathematical Approach:** For a numerical approach, use a `while (N > 0)` loop with modulo 10 (`N % 10 == 0`) to peel off and check each digit. Ensure you explicitly check the edge case where $N = 0$ initially, as a standard division loop would skip it.
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ — The number of operations scales with the number of digits in \(N\), which is at most 19 digits.
* **Space Complexity:** $\mathcal{O}(1)$ or $\mathcal{O}(\log_{10} N)$ — Constant space if tracking numerically, minimal space if storing the short digit string.
