# N. Inverted Hollow Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer n. 

Print an inverted hollow centered triangle pattern consisting of n rows.

## Input
The input contains a single integer n (1 ≤ n ≤ 2 ⋅ 10³).

## Output
Print n lines, as given in the example.

## Examples

### Example 1
**Input:**
```text
7
```

**Output:**
```text
* * * * * * * 
 *         * 
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
* * * 
 * * 
  * 
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — The program iterates through $n$ rows. Each row prints up to $2n$ spaces and stars. For $n \le 2 \cdot 10^3$, the maximum total operations will be around $4 \cdot 10^6$, which comfortably passes within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — Characters are rendered dynamically line-by-line without consuming heap or collection memory.

### 💡 Pattern Logic
Let's analyze row $i$ (0-indexed from $0$ to $n-1$):

1. **Leading Spaces:** Every row $i$ starts with exactly $i$ spaces.
2. **Inner Content:**
   * **First Row ($i = 0$):** Print $n$ stars, each separated by a space (`"* " * n`).
   * **Last Row ($i = n - 1$):** Print a single star followed by a space (`"* "`).
   * **Middle Rows ($0 < i < n - 1$):** Print a single star (`*`), followed by $2(n - i - 2) + 1$ inner spaces, followed by a final star and a trailing space (`* `).
