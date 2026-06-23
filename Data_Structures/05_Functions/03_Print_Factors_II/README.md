# C. Print Factors - II

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). 

Write a function that prints all factors of \(N\) in decreasing order.

*A positive integer \(d\) is called a divisor (factor) of \(N\) if \(N \pmod d = 0\).

## Input
The only line contains an integer \(N\) (\(1 \le N \le 10^5\)).

## Output
Print all factors of \(N\) in decreasing order, separated by single spaces.

## Examples

### Example 1
**Input:**
```text
12
```

**Output:**
```text
12 6 4 3 2 1
```

---

## My Solution Notes
* **Time Complexity:** 
  * $\mathcal{O}(\sqrt{N})$ if you loop up to $\sqrt{N}$, collect factor pairs, and sort/reverse them.
  * $\mathcal{O}(N)$ is also perfectly fine since $N \le 10^5$ easily passes within the 1-second limit using a backward loop from $N$ down to 1.
* **Space Complexity:** $\mathcal{O}(\sqrt{N})$ if storing factors in a vector to print backwards, or $\mathcal{O}(1)$ if utilizing a simple downward linear scan.
