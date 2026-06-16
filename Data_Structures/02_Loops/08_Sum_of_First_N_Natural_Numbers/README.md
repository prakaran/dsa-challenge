# H. Sum of First N Natural Numbers

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Find the sum:
\[1 + 2 + 3 + \dots + N\]

## Input
The first line contains an integer \(N\) (\(1 \le N \le 10^6\)).

## Output
Print a single integer — the sum of the first \(N\) natural numbers.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
15
```

### Example 2
**Input:**
```text
10
```

**Output:**
```text
55
```

## Note
The first 5 natural numbers are 1, 2, 3, 4, and 5, and their sum is 15.

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — By using a mathematical formula, the answer can be computed instantly without loops.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory is allocated.

### 💡 Optimization Formula
While a loop running up to $10^6$ times would pass within 1 second, it is unnecessary. You can compute the sum of the first $N$ natural numbers instantly using **Gauss's Formula**:
$$\text{Sum} = \frac{N \times (N + 1)}{2}$$

### ⚠️ Integer Overflow Hazard
This is a classic trap in competitive programming. 
When $N = 10^6$, the calculation $N \times (N + 1)$ equals $10^6 \times (10^6 + 1) \approx 10^{12}$. 

A standard 32-bit signed integer (`int`) can only hold values up to roughly $2 \times 10^9$. If you perform this calculation using `int`, it will cause an **integer overflow**, resulting in a negative or garbage value, and leading to a **Wrong Answer (WA)**.

**Fix:** Use a 64-bit integer (`long long` in C++). Ensure at least one variable in the multiplication is cast to a 64-bit type before the multiplication occurs:
```cpp
long long N;
std::cin >> N;
long long sum = N * (N + 1) / 2;
std::cout << sum << "\n";
```
