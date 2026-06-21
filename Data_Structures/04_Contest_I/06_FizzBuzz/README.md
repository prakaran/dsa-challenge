# F. FizzBuzz

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print the numbers from 1 to \(N\) following the rules below:

* If the number is divisible by both 3 and 5, print `FizzBuzz`.
* If the number is divisible by 3 (but not 5), print `Fizz`.
* If the number is disabled by 5 (but not 3), print `Buzz`.
* Otherwise, print the number itself.

Each output must be printed on a new line.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 10^5\)).

## Output
Print \(N\) lines according to the rules above.

## Examples

### Example 1
**Input:**
```text
15
```

**Output:**
```text
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

---

## My Solution Notes
* **Order of Checks:** Always check for divisibility by both 3 and 5 first (i.e., `i % 15 == 0`). If you check for 3 or 5 individually first, the program will incorrectly print `Fizz` or `Buzz` instead of `FizzBuzz` for multiples of 15.
* **Fast I/O:** Because \(N\) goes up to $10^5$, printing each line using standard output streams requires fast I/O optimizations in languages like C++ (`\n` instead of `endl`) to avoid a Time Limit Exceeded (TLE) verdict.
* **Time Complexity:** $\mathcal{O}(N)$ — The algorithm iterates linearly from 1 to \(N\).
* **Space Complexity:** $\mathcal{O}(1)$ — No extra collection or structure is required since numbers can be evaluated and printed instantly.
