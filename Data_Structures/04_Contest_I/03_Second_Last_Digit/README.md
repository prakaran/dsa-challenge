# C. Second Last Digit

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Your task is to print the second last digit (the tens place digit) of \(N\).

## Input
The only line contains an integer \(N\) (\(10 \le N \le 10^5\)).

## Output
Print a single digit — the second last digit of \(N\).

## Examples

### Example 1
**Input:**
```text
42
```

**Output:**
```text
4
```

### Example 2
**Input:**
```text
10
```

**Output:**
```text
1
```

---

## My Solution Notes
* **Mathematical Approach:** You can isolate the last two digits using modulo 100 (`N % 100`), and then divide by 10 (`/ 10`) using integer division to get the second last digit.
* **String Approach:** Since the input is read as text, you can also treat \(N\) as a string and access the character at index `length - 2`.
* **Time Complexity:** $\mathcal{O}(1)$ — Both basic arithmetic and string indexing take constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory scaling with the input size is required.
