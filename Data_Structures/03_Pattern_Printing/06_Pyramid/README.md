# F. Pyramid

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a pyramid (left-aligned right triangle) pattern consisting of \(n\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^3\)).

## Output
Print \(n\) lines, as given in the example.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
*
**
***
****
*****
```

### Example 2
**Input:**
```text
6
```

**Output:**
```text
*
**
***
****
*****
******
```

### Example 3
**Input:**
```text
7
```

**Output:**
```text
*
**
***
****
*****
******
*******
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — For each row $i$ (from $1$ to $n$), the program prints exactly $i$ stars. The total number of stars printed is the sum of the first $n$ integers: $\frac{n(n+1)}{2}$. Given $n \le 2 \cdot 10^3$, total operations top out around $2 \cdot 10^6$, which easily runs in under 1 second.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional space structures are required.

### 💡 Pattern Logic
* Row $1$ has $1$ star.
* Row $2$ has $2$ stars.
* Row $i$ has $i$ stars.
* Simply loop from $1$ to $n$ and print the corresponding number of stars on each line.
