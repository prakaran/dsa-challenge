# A. 2-Stars

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a pattern consisting of \(n\) rows, where each row contains exactly two stars (`**`).

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^5\)).

## Output
Print \(n\) lines. Each line must contain exactly two stars (`**`).

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
**
**
**
**
**
```

### Example 2
**Input:**
```text
3
```

**Output:**
```text
**
**
**
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n)$ — The program runs a loop exactly $n$ times to print each row.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single integer variable is used to store the input.

### ⚠️ Competitive Programming Hint
Since $n$ can be up to $2 \cdot 10^5$, printing lines one by one using `std::endl` might cause a Time Limit Exceeded (TLE) error because it flushes the output buffer every time. Make sure to use `'\n'` instead of `std::endl` for fast I/O in your C++ code.
