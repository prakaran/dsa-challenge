# A. Hello Functions

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). 

Write a function that takes \(N\) as a parameter and prints the string `I am learning functions` exactly \(N\) times, each on a new line.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 1000\)).

## Output
Print \(N\) lines. Each line must be exactly:
```text
I am learning functions
```

## Examples

### Example 1
**Input:**
```text
3
```

**Output:**
```text
I am learning functions
I am learning functions
I am learning functions
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The function executes a loop that runs exactly $N$ times.
* **Space Complexity:** $\mathcal{O}(1)$ — The algorithm uses a constant amount of extra memory space.
