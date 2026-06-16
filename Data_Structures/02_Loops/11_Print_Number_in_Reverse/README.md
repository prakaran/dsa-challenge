# K. Print Number in Reverse

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
Given an integer \(N\), print the digits of \(N\) in reverse order.

## Input
A single integer \(N\) (\(0 \le N \le 10^{18}\)).

## Output
Print the number formed by reversing the digits of \(N\).

## Examples

### Example 1
**Input:**
```text
12349
```

**Output:**
```text
94321
```

### Example 2
**Input:**
```text
1950
```

**Output:**
```text
0591
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ — The number of operations depends strictly on the total number of digits in $N$, which is at most 19 digits.
* **Space Complexity:** $\mathcal{O}(1)$ — No additional structural tracking memory is needed.

### ⚠️ The Leading/Trailing Zero Trap
Look closely at **Example 2**: `1950` outputs `0591`. 
In standard mathematical reversal algorithms where you accumulate digits (`reversed_num = reversed_num * 10 + digit`), the value `1950` turns into the integer value `591`, completely dropping the leading zero. 

Because the problem requires you to print the visual representation (preserving the zero from the original end), it is best treated as a **String Manipulation** problem rather than an arithmetic problem.

### 💡 Two Optimal Implementations

#### Method 1: The String Trick (Recommended)
Read the input directly as a `std::string`. This bypasses any integer range limit concerns and lets you print characters from the last index down to the first index:
```cpp
std::string s;
std::cin >> s;
for (int i = s.length() - 1; i >= 0; --i) {
    std::cout << s[i];
}
std::cout << "\n";
```

#### Method 2: Mathematical / Digit Isolation Loop
If you read it as an integer, you must handle $N = 0$ as a special corner case since a `while (N > 0)` loop will skip it entirely:
```cpp
long long n;
std::cin >> n;
if (n == 0) {
    std::cout << 0;
}
while (n > 0) {
    std::cout << (n % 10);
    n /= 10;
}
std::cout << "\n";
```
