# G. Inverse Pyramid

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print an inverse pyramid (left-aligned descending right triangle) pattern consisting of \(n\) rows.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^3\)).

## Output
Print \(n\) lines, as given in the example.

## Examples

### Example 1
**Input:**
```text
3
```

**Output:**
```text
***
**
*
```

### Example 2
**Input:**
```text
5
```

**Output:**
```text
*****
****
***
**
*
```

### Example 3
**Input:**
```text
8
```

**Output:**
```text
********
*******
******
*****
****
***
**
*
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — For each row $i$ (looping down from $n$ to $1$), the program prints exactly $i$ stars. The total characters printed equal $\frac{n(n+1)}{2}$. Since $n \le 2 \cdot 10^3$, the maximum number of print operations is roughly $2 \cdot 10^6$, which finishes well within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra arrays or nested data allocations are required.

### 💡 Pattern Logic
* Row $1$ has $n$ stars.
* Row $2$ has $n - 1$ stars.
* Row $i$ (0-indexed from $0$ to $n-1$) has $n - i$ stars.
* You can implement this easily using a loop that decrements from $n$ down to $1$.
