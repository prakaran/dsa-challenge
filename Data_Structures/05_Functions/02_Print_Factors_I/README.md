# B. Print Factors - I

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). 

Write a function that prints all factors of \(N\) in increasing order.

*A positive integer \(d\) is called a divisor (factor) of \(N\) if \(N \pmod d = 0\).

## Input
The only line contains an integer \(N\) (\(1 \le N \le 10^5\)).

## Output
Print all factors of \(N\) in increasing order, separated by single spaces.

## Examples

### Example 1
**Input:**
```text
12
```

**Output:**
```text
1 2 3 4 6 12
```

---

## My Solution Notes
* **Time Complexity:** 
  * $\mathcal{O}(\sqrt{N})$ if you only loop up to $\sqrt{N}$ and collect pairs.
  * $\mathcal{O}(N)$ is also acceptable here since $N \le 10^5$ is small enough to pass within 1 second using a simple linear loop.
* **Space Complexity:** $\mathcal{O}(\sqrt{N})$ if storing factors to sort them, or $\mathcal{O}(1)$ if printing directly during a linear scan.
