# F. Rectangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter using the following formulas:
- \(\text{Area} = \text{length} \times \text{breadth}\)
- \(\text{Perimeter} = 2 \times (\text{length} + \text{breadth})\)

## Input
A single line containing two integers \(\text{length}\) and \(\text{breadth}\) (\(1 \le \text{length}, \text{breadth} \le 1000\)).

## Output
Print the calculated area and perimeter in the exact format shown in the example.

## Examples

### Example 1
**Input:**
```text
5 7
```

**Output:**
```text
Area = 35
Perimeter = 24
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — The arithmetic computations take constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a few primitive variables are used to store the dimensions and results.
* **Data Types:** Since the maximum values are $1000 \times 1000 = 1,000,000$, standard 32-bit integers (`int` in C++) are perfectly safe and will not overflow.
