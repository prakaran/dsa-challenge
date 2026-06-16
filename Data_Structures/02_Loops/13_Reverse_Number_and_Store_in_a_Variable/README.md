# M. Reverse Number and Store in a Variable

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a non-negative integer \(N\). Reverse the digits of \(N\) and store the result in a variable.

## Input
The first line contains a non-negative integer \(N\) (\(0 \le N \le 10^9\)).

## Output
Print the result.

## Examples

### Example 1
**Input:**
```text
1234
```

**Output:**
```text
4321
```

### Example 2
**Input:**
```text
1950
```

**Output:**
```text
591
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ — The loop processes each digit of the number one by one. Since $N \le 10^9$, it runs for at most 10 iterations.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a few primitive variables are needed to hold the calculations.

### ⚠️ Contrast with Problem K (Crucial Difference)
Look closely at **Example 2**: `1950` outputs `591`. 

Unlike Problem K (where you just printed characters backwards as a string to preserve leading zeros like `0591`), this problem explicitly states you must **store the result in a variable**. When you reverse `1950` mathematically into an integer variable, `0591` naturally evaluates to the numerical value `591`, causing the leading zero to disappear. This means you **must** use mathematical extraction rather than a raw string reversal.

### 💡 Mathematical Reversal Formula
To shift existing digits to the left and append a new digit to the units place, use the formula: `reversed_num = (reversed_num * 10) + remainder`.

```cpp
int n;
std::cin >> n;

int reversed_num = 0;
while (n > 0) {
    int last_digit = n % 10;
    reversed_num = (reversed_num * 10) + last_digit;
    n /= 10;
}

std::cout << reversed_num << "\n";
```

### 🔍 Edge Case
If $N = 0$, the `while (n > 0)` loop will not execute. Because `reversed_num` is initialized to `0`, the program will correctly output `0` without needing an extra conditional block.
