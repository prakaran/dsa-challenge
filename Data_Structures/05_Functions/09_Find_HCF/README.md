# I. Find HCF

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(A\) and \(B\).

Find the HCF (Highest Common Factor) of \(A\) and \(B\) by writing a function that takes \(A\) and \(B\) as parameters and returns their HCF.

## Input
The only line contains two integers \(A\) and \(B\) (\(1 \le A, B \le 10^5\)).

## Output
Print the HCF of \(A\) and \(B\).

## Examples

### Example 1
**Input:**
```text
12 36
```

**Output:**
```text
12
```

---

## My Solution Notes
* **Terminology:** HCF (Highest Common Factor) is exactly the same as GCD (Greatest Common Divisor).
* **Time Complexity:** 
  * $\mathcal{O}(\log(\min(A, B)))$ if you use the Euclidean algorithm (`A % B` reduction). This is highly efficient and executes in just a few steps.
  * $\mathcal{O}(\min(A, B))$ if using a brute-force linear downward scan from $\min(A, B)$ down to 1. Given the limit $10^5$, this will also pass, but it is not optimal.
* **Space Complexity:** $\mathcal{O}(1)$ for the iterative Euclidean algorithm or $\mathcal{O}(\log(\min(A, B)))$ stack space for the recursive version.
