# I. Shifted Pyramid

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Your task is to print a shifted pyramid of height \(N\) using the character `x`. 

As shown in the example, for the \(i\)-th row (1-indexed, from \(1\) to \(N\)):
* It starts with \(i - 1\) leading space characters.
* It is followed by exactly \(i\) characters of `x`.
* **Important:** Do not print any trailing spaces at the end of the lines.

Each row must be printed on a new line.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 26\)).

## Output
Print the required shifted pyramid.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
x
 xx
  xxx
   xxxx
    xxxxx
```

---

## My Solution Notes
* **Pattern Definition:** For any row index $i$ (where $0 \le i < N$):
  * Print exactly $i$ spaces.
  * Print exactly $i + 1$ characters of `'x'`.
  * Print a newline character immediately after the last `'x'` to strictly avoid trailing spaces.
* **String Construction Trick:** In languages like Python, this pattern can be generated compactly using string multiplication: `" " * i + "x" * (i + 1)`. In C++, you can use the `std::string(count, character)` constructor to stream blocks of characters cleanly.
* **Time Complexity:** $\mathcal{O}(N^2)$ — Since $N \le 26$, the total number of characters printed is small ($\approx 700$ operations at worst), which easily passes in less than a millisecond.
* **Space Complexity:** $\mathcal{O}(1)$ or $\mathcal{O}(N)$ — Characters can be printed sequentially in constant space, or temporarily allocated in small row strings.
