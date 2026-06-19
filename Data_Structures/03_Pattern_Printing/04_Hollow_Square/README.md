# D. Hollow Square

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a hollow square pattern consisting of \(n\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^3\)).

## Output
Print \(n\) lines, as given in the example.

## Examples

### Example 1
**Input:**
```text
6
```

**Output:**
```text
******
*    *
*    *
*    *
*    *
******
```

### Example 2
**Input:**
```text
2
```

**Output:**
```text
**
**
```

### Example 3
**Input:**
```text
8
```

**Output:**
```text
********
*      *
*      *
*      *
*      *
*      *
*      *
********
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — You process $n$ lines, each printing $n$ total characters (either stars or spaces). With $n \le 2 \cdot 10^3$, total operations top out around $4 \cdot 10^6$, safely passing under 1 second.
* **Space Complexity:** $\mathcal{O}(1)$ — You only need a few primitive variables to manage the dimensions.

### 💡 Pattern Logic
To print a hollow square of size $n$:
1. **First and Last Rows:** Print exactly $n$ stars (`*`).
2. **Middle Rows ($n - 2$ lines):** Print 1 star, followed by $n - 2$ spaces, followed by 1 star.
3. **Edge Case:** If $n = 1$ or $n = 2$, the logic naturally handles it without requiring spaces in between.
