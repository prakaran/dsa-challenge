# L. Sum Of Digits

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
Given an integer \(N\), find the sum of its digits.

## Input
A single integer \(N\) (\(0 \le N \le 10^{18}\)).

## Output
Print the sum of digits of \(N\).

## Examples

### Example 1
**Input:**
```text
1234
```

**Output:**
```text
10
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ or $\mathcal{O}(\text{length of string})$ — The algorithm processes each digit of the number exactly once, making at most 19 iterations.
* **Space Complexity:** $\mathcal{O}(1)$ or $\mathcal{O}(\text{length of string})$ — Minimal space is utilized depending on whether you process mathematically or as a string.

### ⚠️ Datatype Alert: Large Input Range
The input $N$ can be up to $10^{18}$. A standard 32-bit `int` cannot hold this value safely (it caps at roughly $2 \times 10^9$). If you process this problem mathematically using numbers, you must use a 64-bit integer type (`long long` in C++).

### 💡 Two Alternative Approaches

#### Method 1: Mathematical Extraction (Using `long long`)
You can isolate individual digits by using the modulo operator (`% 10`) and reduce the number using division (`/ 10`) inside a loop:
```cpp
long long n;
std::cin >> n;
long long sum = 0;
while (n > 0) {
    sum += (n % 10);
    n /= 10;
}
std::cout << sum << "\n";
```

#### Method 2: String Processing (Elegant & Safe)
Because we only care about individual characters, treating the input as a string bypasses large integer constraints entirely. Convert each character back to its numeric value by subtracting the ASCII character `'0'`:
```cpp
std::string s;
std::cin >> s;
long long sum = 0;
for (char ch : s) {
    sum += (ch - '0');
}
std::cout << sum << "\n";
```
