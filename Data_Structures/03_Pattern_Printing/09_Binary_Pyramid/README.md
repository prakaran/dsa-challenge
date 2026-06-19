# I. Binary Pyramid

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a pyramid of \(n\) rows. The first row contains a single `'0'`. From the second row onward, the digits alternate between `'1'` and `'0'`.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the binary pyramid with \(n\) rows.

## Examples

### Example 1
**Input:**
```text
6
```

**Output:**
```text
0
10
010
1010
01010
101010
```

### Example 2
**Input:**
```text
2
```

**Output:**
```text
0
10
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — For each row $i$ (from $1$ to $n$), the program prints exactly $i$ characters. The maximum number of printed digits is $\frac{200 \times 201}{2} = 20,100$, which finishes in less than a millisecond.
* **Space Complexity:** $\mathcal{O}(1)$ — The pattern can be evaluated dynamically character-by-character without caching arrays.

### 💡 Pattern Logic
Let's analyze the starting character of each row $i$ (1-indexed):
* Row 1 starts with `0`
* Row 2 starts with `1`
* Row 3 starts with `0`
* Row 4 starts with `1`

Notice that **odd rows start with `0`** and **even rows start with `1`**. 

Within any row, characters toggle back and forth. You can easily determine whether to print a `1` or `0` at row $i$ (1-indexed) and column $j$ (1-indexed) using the parity check:
* If $(i + j)$ is **even**, print `0`.
* If $(i + j)$ is **odd**, print `1`.
