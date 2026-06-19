# R. Butterfly

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer n.

Print a butterfly pattern consisting of 2n-1 rows.

## Input
The input contains a single integer n (1 ≤ n ≤ 200).

## Output
Print the pattern, as given in the example.

## Examples

### Example 1
**Input:**
```text
6
```

**Output:**
```text
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
```

### Example 2
**Input:**
```text
4
```

**Output:**
```text
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```

---

## My Solution Notes
* **Pattern Logic:**
  * The total width of the pattern is always $2n$ characters.
  * The pattern is perfectly symmetric horizontally and vertically, split into an upper section and a lower section.
* **Row-by-Row Breakdown:**
  * **Upper Half** (Row $i$ from $1$ to $n$):
    * Print $i$ stars (`*`).
    * Print $2n - 2i$ spaces.
    * Print $i$ stars (`*`).
    * *Note:* At row $i = n$, spaces become $0$, printing a solid block of $2n$ stars.
  * **Lower Half** (Row $i$ from $n-1$ down to $1$):
    * Print $i$ stars (`*`).
    * Print $2n - 2i$ spaces.
    * Print $i$ stars (`*`).
* **Time Complexity:** $\mathcal{O}(n^2)$ — Two nested loops print $2n$ characters across $2n-1$ lines.
* **Space Complexity:** $\mathcal{O}(1)$ — Characters are printed directly to the output without extra memory buffers.
