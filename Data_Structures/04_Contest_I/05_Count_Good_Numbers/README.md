# E. Count Good Numbers

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\) and then \(N\) integers. Your task is to count how many of these numbers are good.

A number \(x\) is said to be **good** if:
* \(x\) is a factor of 18 (i.e., \(x \neq 0\) and \(18 \pmod x == 0\)), **or**
* \(x\) is a multiple of 45 (i.e., \(x \pmod{45} == 0\)).

## Input
The first line contains an integer \(N\) (\(1 \le N \le 10^5\)).
The second line contains \(N\) integers \(x_1, x_2, \dots, x_N\) (\(0 \le x_i \le 10^9\)).

## Output
Print a single integer: the number of good integers among the \(N\) given numbers.

## Examples

### Example 1
**Input:**
```text
8
1 2 3 4 5 6 9 90
```

**Output:**
```text
6
```

### Note
For $x = 0$, it cannot be a factor of 18 (division by zero is undefined), but it is a multiple of 45 because $0 \pmod{45} == 0$. Thus, $0$ is considered a good number.

---

## My Solution Notes
* **Edge Case Handling:** You must check if $x > 0$ before applying the modulo operation for the factor check (`18 % x == 0`) to prevent a runtime division-by-zero error.
* **Fast I/O:** Since $N$ can be up to $10^5$, utilize fast input/output methods in C++ (`cin.tie(NULL)`) to comfortably clear the 1-second time limit.
* **Time Complexity:** $\mathcal{O}(N)$ — The program processes each of the $N$ integers exactly once.
* **Space Complexity:** $\mathcal{O}(1)$ — The integers can be processed on the fly without storing them in an array or vector.
