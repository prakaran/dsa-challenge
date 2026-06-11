# K. Factor

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(F\). Your task is to check whether \(F\) is a factor of \(N\).  
A number \(F\) is a factor of \(N\) if \(N\) is perfectly divisible by \(F\).

## Input
A single line containing two integers \(N\) and \(F\) (\(1 \le N, F \le 10^9\)).

## Output
Print:
- `Yes` if \(F\) is a factor of \(N\)
- `No` otherwise

## Examples

### Example 1
**Input:**
```text
36 6
```

**Output:**
```text
Yes
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Checking divisibility using the modulo operator is a single constant-time calculation.
* **Space Complexity:** $\mathcal{O}(1)$ — Standard primitive memory allocation.
* **Key Concept:** To find if \(F\) is a factor of \(N\), check if the remainder of the division is zero using the modulo operator (`N % F == 0`).
* **Data Types:** Since the inputs can be up to $10^9$, standard 32-bit `int` data types in C++ are sufficient. However, using `long long` is a safe competitive programming habit to prevent any potential intermediate computation overflows.
