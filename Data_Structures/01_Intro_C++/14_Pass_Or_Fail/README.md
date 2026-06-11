# M. Pass or Fail

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given the marks obtained by a student. Your task is to check whether the student has passed or failed.  
A student is considered to have passed if the marks obtained are at least 35.

## Input
A single integer \(\text{marks}\) (\(0 \le \text{marks} \le 100\)).

## Output
Print:
- `Pass` if the student has passed (\(\text{marks} \ge 35\))
- `Fail` otherwise

## Examples

### Example 1
**Input:**
```text
36
```
**Output:**
```text
Pass
```

### Example 2
**Input:**
```text
20
```
**Output:**
```text
Fail
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — A single relational comparison check executes instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — Uses a single primitive integer variable.
* **Key Concept:** The condition requires checking if the variable is greater than or equal to 35 (`marks >= 35`).
