# N. Palindrome

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a non-negative integer \(N\). Check whether \(N\) is a palindrome or not.

A number is called a palindrome if it reads the same forwards and backwards.

## Input
The first line contains a non-negative integer \(N\) (\(0 \le N \le 10^{18}\)).

## Output
Print `YES` if the number is a palindrome, otherwise print `NO`.

## Examples

### Example 1
**Input:**
```text
121
```

**Output:**
```text
YES
```

### Example 2
**Input:**
```text
1950
```

**Output:**
```text
NO
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(\log_{10} N)$ or $\mathcal{O}(\text{length of string})$ — The runtime scales linearly with the number of digits (at most 19 digits).
* **Space Complexity:** $\mathcal{O}(1)$ or $\mathcal{O}(\text{length of string})$ — Minimal memory is consumed depending on whether you process mathematically or via string comparisons.

### 💡 Two Alternative Approaches

#### Method 1: String Two-Pointer Technique (Recommended)
Since a palindrome reads identically from left-to-right and right-to-left, treating the input as a string avoids any large numeric limitations. You can check matching characters from both ends moving inward:
```cpp
std::string s;
std::cin >> s;

bool is_palindrome = true;
int left = 0, right = s.length() - 1;

while (left < right) {
    if (s[left] != s[right]) {
        is_palindrome = false;
        break;
    }
    left++;
    right--;
}

std::cout << (is_palindrome ? "YES" : "NO") << "\n";
```

#### Method 2: Mathematical Digit Reversal
If you prefer arithmetic extraction, you must use a 64-bit integer (`long long` in C++) because $N$ can scale up to $10^{18}$. Store a copy of the original number, reverse it mathematically, and compare the final reversed variable to the original copy:
```cpp
long long n;
std::cin >> n;

long long original = n;
long long reversed_num = 0;

while (n > 0) {
    reversed_num = (reversed_num * 10) + (n % 10);
    n /= 10;
}

std::cout << (original == reversed_num ? "YES" : "NO") << "\n";
```
