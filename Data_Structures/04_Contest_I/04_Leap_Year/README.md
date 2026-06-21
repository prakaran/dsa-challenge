# D. Leap Year

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
To check whether a year is a leap year, follow these explicit rules:
1. First check if the year is divisible by 100. If it is, then it must also be divisible by 400 to be a leap year.
2. If the year is not divisible by 100, then it is a leap year if it is divisible by 4.

You are given a year Y. Determine whether it is a leap year or not based on these rules.

## Input
The only line contains an integer Y (1600 ≤ Y ≤ 9000).

## Output
Print `Yes` if the year is a leap year, otherwise print `No`.

## Examples

### Example 1
**Input:**
```text
2000
```

**Output:**
```text
Yes
```

### Example 2
**Input:**
```text
2004
```

**Output:**
```text
Yes
```

### Example 3
**Input:**
```text
2100
```

**Output:**
```text
No
```

---

## My Solution Notes
* **Conditional Logic:** The logic can be written sequentially or combined into a single boolean expression: `(Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)`.
* **Time Complexity:** $\mathcal{O}(1)$ — The arithmetic modulo checks run instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single integer variable is used.
