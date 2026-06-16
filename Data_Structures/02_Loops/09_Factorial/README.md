# I. Factorial

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). 

Find the factorial of \(N\) by writing a function that takes \(N\) as a parameter and returns \(N!\), where:
\[N! = 1 \times 2 \times 3 \times \dots \times N\]

## Input
The first line contains an integer \(N\) (\(0 \le N \le 20\)).

## Output
Print the value of \(N!\).

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
120
```

### Example 2
**Input:**
```text
7
```

**Output:**
```text
5040
```

## Note
* By definition, \(0! = 1\).
* The constraint \(N \le 20\) ensures the answer fits in a 64-bit integer.

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The function executes a loop running exactly $N$ times to calculate the product.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a few primitive variables are tracked in memory.

### ⚠️ Datatype Alert: 64-bit Integers Required
As the note points out, factorials grow incredibly fast! While $12!$ barely fits inside a standard 32-bit `int` ($479,001,600$), $20!$ hits a staggering $2,432,902,008,176,640,000$. 

You must use a 64-bit integer datatype (`long long` in C++) for both the return value of your function and the accumulation variable inside it.

### 💡 Base Case Handling
Don't forget the math rule: $0! = 1$. By initializing your tracking product variable to `1`, your loop condition (like `i <= N` starting at `1`) will naturally skip execution when $N = 0$, flawlessly returning `1`.

```cpp
long long getFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
```
