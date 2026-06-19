# P. Hollow Diamond

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print a hollow diamond pattern consisting of \(2n-1\) rows. The first \(n\) rows form the upper triangle. The next \(n-1\) rows form the lower triangle.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the hollow diamond consisting of \(2n-1\) rows.

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
*   * 
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
  *   * 
 *     * 
*       * 
 *     * 
  *   * 
   * * 
    * 
```

---

## My Solution Notes
* **Pattern Logic:**
  * For any row, you need an initial padding of **leading spaces**.
  * If it is the first or last row, only print a single `*`.
  * For all middle rows, print the first `*`, followed by **inner spaces**, followed by the second `*`.
* **Row-by-Row Breakdown:**
  * **Top Triangle** (Row $i$ from $1$ to $n$):
    * Leading spaces: $n - i$
    * If $i = 1$: Print `*`
    * If $i > 1$: Print `*`, then $2(i - 1) - 1$ spaces, then `*`
  * **Bottom Triangle** (Row $i$ from $1$ to $n - 1$):
    * Leading spaces: $i$
    * If $i = n - 1$: Print `*`
    * If $i < n - 1$: Print `*`, then $2(n - i - 1) - 1$ spaces, then `*`
* **Time Complexity:** $\mathcal{O}(n^2)$ — String creation or character printing scales with $n$ over $2n-1$ rows.
* **Space Complexity:** $\mathcal{O}(1)$ — No structural data storage required.
