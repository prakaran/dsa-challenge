# C. Print All Even Numbers from 1 to N

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print all even numbers between \(1\) and \(N\) (inclusive) in increasing order.

An integer is even if it is divisible by \(2\).

## Input
The first line contains an integer \(N\) (\(1 \le N \le 10^5\)).

## Output
Print all even numbers between \(1\) and \(N\), separated by spaces.

If there is no even number in the given range, print nothing.

## Examples

### Example 1
**Input:**
```text
10
```

**Output:**
```text
2 4 6 8 10
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ or $\mathcal{O}(N/2)$ — Both simplify to linear time.
* **Space Complexity:** $\mathcal{O}(1)$ — Outputs are printed directly without array allocation.

### 💡 Optimization Tip
Instead of looping through every number from $1$ to $N$ and checking `if (i % 2 == 0)`, you can optimize the loop by starting directly at $2$ and incrementing by $2$ each time (`i += 2`). This cuts the number of loop iterations exactly in half.

```cpp
// Optimized loop approach
for (int i = 2; i <= N; i += 2) {
    std::cout << i << (i + 2 > N ? "" : " ");
}
```

### ⚠️ Edge Case
The problem states: *"If there is no even number in the given range, print nothing."* 
If $N = 1$, the loop condition `i <= N` (starting at $2$) will naturally fail, and the program will safely output nothing without crashing.
