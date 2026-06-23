# F. nCr

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(n\) and \(r\).

Write a function to compute the binomial coefficient:
\[\binom{n}{r} = \frac{n!}{r!(n-r)!}\]

## Input
The only line contains two integers \(n\) and \(r\) (\(0 \le r \le n \le 10\)).

## Output
Print the value of \(\binom{n}{r}\).

## Examples

### Example 1
**Input:**
```text
5 2
```

**Output:**
```text
10
```

### Example 2
**Input:**
```text
10 0
```

**Output:**
```text
1
```

---

## My Solution Notes
* **Constraints:** Because $n \le 10$, the factorials are very small ($10! = 3,628,800$). You can safely use standard 32-bit or 64-bit integers without worrying about arithmetic overflow.
* **Edge Cases:** Ensure your code handles $r = 0$ or $r = n$ correctly, where the expected result is always `1` (since $0! = 1$).
* **Time Complexity:** $\mathcal{O}(n)$ — Computing the required factorials takes linear time.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra data structures are required.
