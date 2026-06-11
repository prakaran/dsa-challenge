# L. Multiple

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(M\). Your task is to check whether \(M\) is a multiple of \(N\).  
A number \(M\) is a multiple of \(N\) if \(M\) is perfectly divisible by \(N\).

## Input
A single line containing two integers \(N\) and \(M\) (\(1 \le N, M \le 10^9\)).

## Output
Print:
- `Yes` if \(M\) is a multiple of \(N\)
- `No` otherwise

## Examples

### Example 1
**Input:**
```text
6 36
```

**Output:**
```text
Yes
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Checking if one number divides another takes a single mathematical operation.
* **Space Complexity:** $\mathcal{O}(1)$ — Memory usage is static and minimal.
* **Key Concept:** This problem is the inverse of checking for a factor. To verify if \(M\) is a multiple of \(N\), check if \(M\) divided by \(N\) leaves a remainder of zero (`M % N == 0`).
* **Data Types:** Standard 32-bit `int` variables can safely hold values up to $10^9$, making them perfect for this task.
