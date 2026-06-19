# C. Square

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print an \(n \times n\) square of stars (`*`).

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
*****
*****
*****
*****
*****
```

### Example 2
**Input:**
```text
2
```

**Output:**
```text
**
**
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — The grid requires printing $n$ rows, each containing $n$ stars. Given $n \le 2 \cdot 10^3$, the maximum total operations will be around $4 \cdot 10^6$, which easily executes within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra arrays or data structures are needed.

### ⚠️ Performance Note
Since the total number of characters printed can reach up to 4 million, standard standard-I/O mechanisms in languages like C++ (`std::cout`) or Java (`System.out.print`) should handle fast I/O using buffer decoupling or `BufferedReader`/`BufferedWriter` to prevent unneeded overhead.
