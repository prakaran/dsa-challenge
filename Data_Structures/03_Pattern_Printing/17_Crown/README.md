# Q. Crown

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print a crown pattern consisting of \(n\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the pattern, as given in the example.

## Examples

### Example 1
**Input:**
```text
7
```

**Output:**
```text
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
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
```

---

## My Solution Notes
* **Pattern Logic:**
  * The pattern consists of \(n\) total rows, where the total width of each row is exactly \(2n\).
  * For each row $i$ (indexed from $1$ to $n$):
    * Print $i$ stars (`*`).
    * Print $2n - 2i$ spaces.
    * Print $i$ stars (`*`).
  * On the very last row ($i = n$), the middle spaces count becomes $0$, resulting in a continuous line of $2n$ stars.
* **Time Complexity:** $\mathcal{O}(n^2)$ — You print $2n$ characters for each of the $n$ rows.
* **Space Complexity:** $\mathcal{O}(1)$ — No complex structures or arrays are needed.
