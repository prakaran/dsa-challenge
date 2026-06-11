# O. Max and Min of 3 Numbers

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given three integers \(A\), \(B\), and \(C\). Your task is to find the minimum and maximum value among them.

## Input
A single line containing three integers \(A\), \(B\), and \(C\) (\(1 \le A, B, C \le 10^9\)).

## Output
Print two lines in the following exact format:
- `Min = X`
- `Max = Y`  
where `X` is the minimum value and `Y` is the maximum value.

## Examples

### Example 1
**Input:**
```text
12 9 15
```

**Output:**
```text
Min = 9
Max = 15
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Finding the minimum and maximum of three values takes a constant, fixed number of operations.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra dynamic data structures or memory containers are scaled.
* **Key Concept:** You can implement this cleanly by nested `if-else` blocks or by nesting the standard template library functions:
  - `Min = std::min({A, B, C});` or `std::min(A, std::min(B, C));`
  - `Max = std::max({A, B, C});` or `std::max(A, std::max(B, C));`
* **Data Types:** Standard 32-bit signed integers (`int` in C++) safely accommodate the range upper bound of $10^9$.
