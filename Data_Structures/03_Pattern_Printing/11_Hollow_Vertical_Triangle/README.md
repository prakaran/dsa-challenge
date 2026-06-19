# K. Hollow Vertical Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print a hollow triangle of \(2n - 1\) rows, expanding up to \(n\) characters and then shrinking back down to \(1\) character.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the hollow vertical triangle of stars, as shown in the example. 

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
*   * 
*     * 
*       * 
*     * 
*   * 
* * 
* 
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
*   * 
* * 
* 
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — The pattern spans $2n - 1$ rows. Each row processes up to $2n$ characters (stars and trailing/inner spaces). Since $n \le 200$, the maximum operations will be around $4 \cdot 10^4$, passing instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra collection arrays are needed.

### 💡 Pattern Logic
Let $k$ be the star count index for the current row (where $k$ increases from $1$ to $n$, then decreases back to $1$):
* **If $k = 1$:** Print exactly one star followed by a space (`"* "`).
* **If $k = 2$:** Print two stars separated by a space (`"* * "`).
* **If $k > 2$:** Print the first star, followed by $2(k - 2) + 1$ spaces, followed by the second star and a final space. 

Alternatively, if treating the grid cells strictly as pairs of characters:
1. Every row starts with a star and a space (`"* "`).
2. If it's not the first row ($k > 1$), print a second star at character column index $2(k-1)$, padded by internal spaces.
