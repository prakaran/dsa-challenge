# I. Add Last Digits

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(M\). Your task is to find the sum of the last digits of \(N\) and \(M\).

## Input
A single line containing two integers \(N\) and \(M\) (\(1 \le N, M \le 1000\)).

## Output
Print a single integer — the sum of the last digits of \(N\) and \(M\).

## Examples

### Example 1
**Input:**
```text
169 125
```

**Output:**
```text
14
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Extracting digits and addition are basic mathematical calculations that execute in constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Uses a fixed amount of primitive memory variables.
* **Key Concept:** To isolate the last digit of any base-10 integer, apply the modulo 10 operator (`% 10`). 
  - For example: `169 % 10 = 9` and `125 % 10 = 5`.
  - Adding these extraction results yields the final answer: `9 + 5 = 14`.
