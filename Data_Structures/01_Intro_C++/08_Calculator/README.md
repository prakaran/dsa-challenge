# H1. Calculator

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(M\). Your task is to compute and print the results of the following basic arithmetic operations:
- Addition: \(N + M\)
- Subtraction: \(N - M\)
- Multiplication: \(N \times M\)
- Integer Division: \(N \div M\)
- Modulo (Remainder): \(N \pmod M\)

## Input
A single line containing two integers \(N\) and \(M\) (\(1 \le N, M \le 1000\)).

## Output
Print five lines displaying the equations and their results in the exact format shown in the example.

## Examples

### Example 1
**Input:**
```text
6 4
```

**Output:**
```text
6 + 4 = 10
6 - 4 = 2
6 * 4 = 24
6 / 4 = 1
6 % 4 = 2
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — All arithmetic evaluations run in constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional operational storage arrays are created.
* **Edge Cases:** Because $1 \le M$, you do not need to worry about division-by-zero errors. Standard 32-bit `int` data types will safely hold the multiplication maximum ($1000 \times 1000 = 1,000,000$).
