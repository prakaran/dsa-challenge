# N. Max and Min of 2 Numbers

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(A\) and \(B\). Your task is to find the minimum and maximum value among them.

## Input
A single line containing two integers \(A\) and \(B\) (\(1 \le A, B \le 10^9\)).

## Output
Print two lines in the following exact format:
- `Min = X`
- `Max = Y`  
where `X` is the minimum value and `Y` is the maximum value.

## Examples

### Example 1
**Input:**
```text
12 9
```

**Output:**
```text
Min = 9
Max = 12
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Finding the maximum and minimum of two numeric values takes constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Primitive storage remains constant.
* **Key Concept:** This can be solved using regular `if-else` conditional branches or by using the built-in standard library functions `std::min(A, B)` and `std::max(A, B)` included in the C++ `<algorithm>` header.
* **Data Types:** Since the values scale up to $10^9$, standard 32-bit signed integers (`int`) are completely fine to use.
