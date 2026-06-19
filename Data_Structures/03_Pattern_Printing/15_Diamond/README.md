# O. Diamond

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print a diamond pattern consisting of \(2n-1\) rows. The first \(n\) rows form the upper triangle. The next \(n-1\) rows form the lower triangle.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the diamond consisting of \(2n-1\) rows.

## Examples

### Example 1
**Input:**
```text
3
```

**Output:**
```text
  * 
 * * 
* * * 
 * * 
  * 
```

### Example 2
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
 * * * * 
  * * * 
   * * 
    * 
```

---

## My Solution Notes
* **Pattern Logic:** 
  * For row $i$ ($1$ to $n$) of the top triangle: Print $n - i$ spaces, followed by $i$ copies of `* `.
  * For row $i$ ($1$ to $n - 1$) of the bottom triangle: Print $i$ spaces, followed by $n - i$ copies of `* `.
* **Time Complexity:** $\mathcal{O}(n^2)$ — Two nested loops handle printing spaces and stars proportional to $n$ for $2n-1$ rows.
* **Space Complexity:** $\mathcal{O}(1)$ — Variables are only used for loop counters; no structural memory is stored.
