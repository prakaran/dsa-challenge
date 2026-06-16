# J. Power of X (\(x^n\))

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(x\) and \(n\).

Compute:
\[x^n = \underbrace{x \times x \times \dots \times x}_{n \text{ times}}\]

## Input
The first line contains two integers \(x\) and \(n\) (\(-10 \le x \le 10\), \(0 \le n \le 20\)).

## Output
Print the value of \(x^n\).

## Examples

### Example 1
**Input:**
```text
2 5
```

**Output:**
```text
32
```

## Note
* $x^0 = 1$ for any $x$.
* The constraints ensure the answer fits in a 64-bit integer.

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(n)$ — A simple loop multiplying $x$ exactly $n$ times is sufficient given the small constraints.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory is allocated.

### ⚠️ Datatype Alert: 64-bit Integers Required
While $x$ and $n$ are small, $10^{20}$ vastly exceeds the maximum capacity of a standard 32-bit signed integer ($\approx 2 \times 10^9$). You must use a 64-bit integer datatype (`long long` in C++) to store the result.

### 💡 Negative Base Handling
Because $x$ can be negative, your solution must natively support alternating signs depending on the parity of $n$ (e.g., $(-2)^3 = -8$, while $(-2)^4 = 16$). Standard loop-based multiplication handles this perfectly without any special conditions.

```cpp
long long result = 1;
for (int i = 0; i < n; ++i) {
    result *= x;
}
```

### 🔍 Avoiding Standard `pow()` Traps
In competitive programming, avoid using the built-in `std::pow(x, n)` from `<cmath>` for integer problems. `std::pow` operates on floating-point numbers (`double`), which can introduce subtle **precision rounding errors** for large values. A custom loop or binary exponentiation is always preferred for exact integer results.
