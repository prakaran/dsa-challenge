# S. Inverted Diamond

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\).

Print an inverted diamond pattern consisting of \(2n-1\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the pattern, as given in the example.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
```

### Example 2
**Input:**
```text
3
```

**Output:**
```text
*** ***
**   **
*     *
**   **
*** ***
```

---

## My Solution Notes
* **Pattern Logic:**
  * The total width of each row is exactly \(2n\) characters.
  * The pattern is split into a top half (\(n\) rows) and a bottom half (\(n-1\) rows).
* **Row-by-Row Breakdown:**
  * **Top Half** (Row $i$ from $0$ to $n-1$):
    * Print $n - i$ stars (`*`).
    * Print $2i + 1$ spaces.
    * Print $n - i$ stars (`*`).
  * **Bottom Half** (Row $i$ from $n-2$ down to $0$):
    * Print $n - i$ stars (`*`).
    * Print $2i + 1$ spaces.
    * Print $n - i$ stars (`*`).
* **Time Complexity:** $\mathcal{O}(n^2)$ — You print $2n$ characters for each of the $2n-1$ lines.
* **Space Complexity:** $\mathcal{O}(1)$ — Characters are output sequentially using loop parameters without loading arrays.
