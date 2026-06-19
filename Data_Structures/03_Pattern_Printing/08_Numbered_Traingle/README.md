# H. Numbered Triangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). 

Print a pyramid of \(n\) rows, where the \(i\)-th row (\(1 \le i \le n\)) consists of the digit \(i\) repeated \(i\) times.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 200\)).

## Output
Print the numbered pyramid with \(n\) rows.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
1
22
333
4444
55555
```

### Example 2
**Input:**
```text
6
```

**Output:**
```text
1
22
333
4444
55555
666666
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n^2)$ — For each row $i$ (from $1$ to $n$), the program prints the character representation of $i$ exactly $i$ times. Since $n \le 200$, the maximum number of character operations is $\frac{200 \times 201}{2} = 20,100$, which completes almost instantly.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional data structures are utilized.

### ⚠️ Note on Constraints
The problem description specifies that $1 \le n \le 200$, but says "consists of the **digit** $i$". In standard pattern problems up to $200$, you should treat $i$ as a number/string to print (e.g., row 10 will print `10` ten times: `10101010101010101010`).
