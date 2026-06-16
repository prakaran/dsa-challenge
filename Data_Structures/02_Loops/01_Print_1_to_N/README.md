# A. Print 1 to N

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a positive integer \(n\). Print the integers from \(1\) to \(n\) (inclusive), each on a separate line.

## Input
The input contains a single integer \(n\) (\(1 \le n \le 2 \cdot 10^5\)).

## Output
Print \(n\) lines. On the \(i\)-th line, output the integer \(i\) (\(1 \le i \le n\)).

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
1
2
3
4
5
```

### Example 2
**Input:**
```text
2
```

**Output:**
```text
1
2
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The program uses a single loop that runs exactly $N$ times.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional data structures are required; only a loop counter is used.

### ⚠️ Competitive Programming Tip
Because $N$ can be up to $2 \cdot 10^5$, using standard `std::endl` in C++ inside the loop will cause a **Time Limit Exceeded (TLE)** error. This happens because `std::endl` forces a slow hardware flush on every single line. Always use `'\n'` and include fast I/O optimizations at the start of your `main()` function:
```cpp
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
```
