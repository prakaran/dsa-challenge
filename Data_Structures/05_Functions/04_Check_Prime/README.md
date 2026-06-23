# D. Check Prime

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer N. 

Write a function that checks whether N is a prime number.

Print `Prime` if N is prime, otherwise print `Not Prime`.

## Input
The only line contains an integer N (1 ≤ N ≤ 10⁵).

## Output
Print `Prime` or `Not Prime`.

## Examples

### Example 1
**Input:**
```text
17
```

**Output:**
```text
Prime
```

### Example 2
**Input:**
```text
4
```

**Output:**
```text
Not Prime
```

---

## My Solution Notes
* **Edge Cases:** Handle $N = 1$ explicitly as it is neither prime nor composite.
* **Time Complexity:** 
  * $\mathcal{O}(\sqrt{N})$ if you check divisibility up to $\sqrt{N}$.
  * $\mathcal{O}(N)$ is acceptable because $N \le 10^5$ completes well within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ as it requires no extra structures.
