# J. Even or Odd

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer N. Your task is to determine whether the number is even or odd.

## Input
A single integer N (1 ≤ N ≤ 10⁹).

## Output
Print `Even` if the number is even, or `Odd` if the number is odd.

## Examples

### Example 1
**Input:**
```text
20
```
**Output:**
```text
Even
```

### Example 2
**Input:**
```text
3
```
**Output:**
```text
Odd
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Parity checking uses a single conditional check and arithmetic operation, which executes instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single variable is used to store the input number.
* **Key Concept:** A number is even if it is perfectly divisible by 2 (i.e., \(N \pmod 2 == 0\)). Otherwise, it is odd. 
* **Data Types:** Since \(N \le 10^9\), a standard 32-bit signed integer (`int` in C++) is perfectly adequate as its maximum limit is $\approx 2 \times 10^9$.
