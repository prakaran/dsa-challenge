# M. Hollow Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a hollow centered triangle pattern consisting of \(n\) rows.

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
     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 
```

### Example 2
**Input:**
```text
4
```

**Output:**
```text
   * 
  * * 
 *   * 
* * * * 
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — The program runs a loop $n$ times. Each row handles a combination of spaces and stars up to $2n$ characters. With $n \le 2 \cdot 10^3$, the operations peak around $4 \cdot 10^6$, running well within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — The lines are printed directly to the output buffer without storing them in a data structure.

### 💡 Pattern Logic
For any given row $i$ (1-indexed from $1$ to $n$):

1. **Leading Spaces:** Every row $i$ starts with exactly $n - i$ spaces.
2. **Inner Content:**
   * **First Row ($i = 1$):** Print a single star followed by a space (`"* "`).
   * **Last Row ($i = n$):** Print $n$ stars, each separated by a space (`"* "* n`).
   * **Middle Rows ($1 < i < n$):** Print a star (`*`), followed by $2(i - 2) + 1$ inner spaces, followed by a final star and a space (`* `).
