# G. Count Numbers

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\) followed by \(N\) integers. Count how many of the given numbers are:
* Positive
* Negative
* Even
* Odd

## Input
The first line contains an integer \(N\) (\(1 \le N \le 10^5\)).
The second line contains \(N\) integers (\(-10^9 \le A_i \le 10^9\)).

## Output
Print four integers, each on a new line, in the following order:
1. Number of positive integers
2. Number of negative integers
3. Number of even integers
4. Number of odd integers

## Examples

### Example 1
**Input:**
```text
5
-2 0 3 7 -5
```

**Output:**
```text
2
2
2
3
```

## Note
* Zero is neither positive nor negative.
* Zero is considered an even number.

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(N)$ — The program processes each of the $N$ integers exactly once. Given $N \le 10^5$, this will comfortably pass within the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — You do not need to store the numbers in an array or vector. You can read and process each number one by one on the fly.

### ⚠️ Critical Corner Case: Negative Odd Numbers
In C++, the modulo operator `%` preserves the sign of the numerator. This means if you check for an odd number using `A_i % 2 == 1`, it will **fail** for negative numbers (e.g., `-5 % 2` results in `-1`). 

To avoid this bug, use one of the following safe methods:
1. **Check for parity using absolute values / even mismatch:** `if (A_i % 2 != 0)`
2. **Bitwise AND operation:** `if (A_i & 1)` (This works perfectly for both positive and negative integers).

### 💡 Zero Tracking
Keep the problem notes explicitly in mind. When $A_i = 0$, it should only increment your `even` counter. It must bypass both the `positive` and `negative` counters.
