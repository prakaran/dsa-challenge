# H2. Calculator - II

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(M\). Your task is to compute and print the results of the following operations:
- Addition: \(N + M\)
- Subtraction: \(N - M\)
- Multiplication: \(N \times M\)
- Integer Division: \(N \div M\)
- Modulo (Remainder): \(N \pmod M\)

## Input
Two integers \(N\) and \(M\), each given on a **separate line** (\(1 \le N, M \le 10^9\)).

## Output
Print five lines displaying the equations and their results in the exact format shown in the example, including the blank lines between calculations.

## Examples

### Example 1
**Input:**
```text
1000000000
1000000000
```

**Output:**
```text
1000000000 + 1000000000 = 2000000000

1000000000 - 1000000000 = 0

1000000000 * 1000000000 = 1000000000000000000

1000000000 / 1000000000 = 1

1000000000 % 1000000000 = 0
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Basic arithmetic operations run in constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Primitive variables require static memory allocation.
* **Critical Edge Case (Integer Overflow):** 
  - Standard 32-bit `int` variables in C++ can only hold values up to $\approx 2 \times 10^9$. 
  - Since $N, M \le 10^9$, their multiplication $N \times M$ can reach $10^{18}$. This will completely overflow a standard `int` and produce negative/garbage values.
  - **Fix:** You must use 64-bit integers (`long long` in C++) for $N$, $M$, and the calculation results to avoid overflow.
* **Input and Output Differences:** 
  - Notice that the inputs are on separate lines, so reading them with `cin >> n >> m;` handles this naturally.
  - Notice the extra newline `\n` or `endl` needed between output blocks to match the double spacing.
