# E. Hollow Rectangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
Given two integers \(n\) and \(m\), print a hollow rectangle of dimensions \(n \times m\).

## Input
The only line contains two integers \(n\) and \(m\) (\(1 \le n, m \le 100\)).

## Output
Print the pattern.

## Examples

### Example 1
**Input:**
```text
5 5
```

**Output:**
```text
*****
*   *
*   *
*   *
*****
```

### Example 2
**Input:**
```text
6 9
```

**Output:**
```text
*********
*       *
*       *
*       *
*       *
*********
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n \cdot m)$ — The grid requires rendering $n$ rows with $m$ characters each. Because $n, m \le 100$, the maximum operations will be around $10^4$, running almost instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — No complex array structures are needed to generate this grid layout.

### 💡 Pattern Logic
To correctly construct the $n \times m$ hollow shape:
1. **Top and Bottom Rows (Rows $1$ and $n$):** Print exactly $m$ stars.
2. **Inner Rows (Rows $2$ through $n-1$):** Print $1$ star, followed by $m - 2$ empty spaces, followed by $1$ star.
3. **Corner Cases:** If $n=1$ or $m=1$, ensure your conditions do not duplicate stars on the same line or print negative counts of inner spaces.
