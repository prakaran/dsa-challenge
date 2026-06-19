# B. M-Stars

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(n\) and \(m\). Your task is to print a rectangle pattern consisting of \(n\) rows and \(m\) columns, where each cell contains a star (`*`).

## Input
The only line contains two integers \(n\) and \(m\) (\(1 \le n, m \le 200\)).

## Output
Print the pattern.

## Examples

### Example 1
**Input:**
```text
5 6
```

**Output:**
```text
******
******
******
******
******
```

### Example 2
**Input:**
```text
3 5
```

**Output:**
```text
*****
*****
*****
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n \cdot m)$ — The program prints $m$ characters for each of the $n$ rows. With $n, m \le 200$, the maximum total operations will be around $4 \cdot 10^4$, which easily runs well within the 1-second time limit.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory structures are required beyond primitive storage variables.

### 💡 Optimization Hint
Instead of printing character by character in a nested loop, you can optimize execution by creating a single string of $m$ stars (`std::string(m, '*')` in C++ or `*` * m` in Python) and printing that string $n$ times.
