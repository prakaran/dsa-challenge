# A. Hello Codeforces

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print the message `Hello Codeforces` exactly \(N\) times. Along with the message, also print the line number starting from 1. Each message must be printed on a new line.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 1000\)).

## Output
Print \(N\) lines. The \(i\)-th line should be:
```text
Hello Codeforces i
```
where \(i\) starts from 1.

## Examples

### Example 1
**Input:**
```text
3
```

**Output:**
```text
Hello Codeforces 1
Hello Codeforces 2
Hello Codeforces 3
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The program runs a loop exactly $N$ times to print each line.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a few primitive variables are used to store the input and loop counter.
