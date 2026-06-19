# L. Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a centered triangle (equilateral-style grid) pattern consisting of \(n\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^3\)).

## Output
Print \(n\) lines, as given in the example.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
    *
   * *
  * * *
 * * * *
* * * * *
```

### Example 2
**Input:**
```text
3
```

**Output:**
```text
  *
 * *
* * *
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — For each row $i$ (from $1$ to $n$), the program prints $n - i$ leading spaces, followed by $i$ stars separated by spaces. With $n \le 2 \cdot 10^3$, the maximum number of character operations is roughly $4 \cdot 10^6$, which executes well within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional memory structures are required beyond primitive loop counters.

### 💡 Pattern Logic
For any given row $i$ (1-indexed from $1$ to $n$):
1. **Leading Spaces:** Print exactly $n - i$ spaces.
2. **Stars Sequence:** Print $i$ stars. Note that each star is separated by a single space (or you can think of it as printing the string `"* "` exactly $i$ times, omitting or keeping the trailing space depending on strict presentation matching).
