# J. Vertical Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print a triangle of \(2n - 1\) rows, growing up to \(n\) stars and then shrinking back down to \(1\) star.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the vertical triangle of stars, as shown in the example. Note that each star is followed by a space.

## Examples

### Example 1
**Input:**
```text
4
```

**Output:**
```text
* 
* * 
* * * 
* * * * 
* * * 
* * 
* 
```

### Example 2
**Input:**
```text
7
```

**Output:**
```text
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — The total number of rows printed is $2n - 1$. The max characters printed will be bounded by $n^2$ operations. With $n \le 200$, operations top out around $4 \cdot 10^4$, executing instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — No structural storage overhead required.

### 💡 Pattern Logic
The pattern can be split clean into two segments:
1. **The Increasing Segment:** Rows $1$ through $n$. Each row $i$ prints exactly $i$ copies of `* `.
2. **The Decreasing Segment:** Rows $n+1$ through $2n-1$. Each row $i$ prints exactly $2n - i$ copies of `* `.

Alternatively, you can run a single loop from $1$ to $2n-1$ and use the mathematical function $\min(i, 2n - i)$ to calculate the exact number of stars needed for that line.
