# J. Hourglass

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print an hourglass pattern of height \(2N - 1\) using the character `.` (dot).

* Dots in the same line must be separated by a single space.
* **Important:** Do not print trailing spaces at the end of lines.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 1000\)).

## Output
Print the required pattern.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
. . . . .
 . . . .
  . . .
   . .
    .
   . .
  . . .
 . . . .
. . . . .
```

---

## My Solution Notes
* **Pattern Breakdown:** The hourglass can be split into two parts: an inverted pyramid of \(N\) rows followed by a regular pyramid of \(N - 1\) rows.
* **Row Elements Formulation:**
  * **Top Half (including the center row, from $i = 0$ to $N-1$):** 
    * Leading spaces: \(i\) spaces.
    * Dots sequence: \(N - i\) dots, with each dot followed by a space except for the final dot of that row to avoid trailing spaces.
  * **Bottom Half (from $i = N-2$ down to $0$):**
    * Leading spaces: \(i\) spaces.
    * Dots sequence: \(N - i\) dots, matching the logic of the top half.
* **Fast I/O Optimization:** With $N \le 1000$, the height of the hourglass is up to $1999$ rows. Since each row prints up to roughly $2000$ characters, the output can contain up to $2 \times 10^6$ characters. Ensure you use fast input/output buffers in C++ to prevent a Time Limit Exceeded (TLE) verdict.
* **Time Complexity:** $\mathcal{O}(N^2)$ — Total characters printed scales quadratically with $N$.
* **Space Complexity:** $\mathcal{O}(1)$ — The pattern can be evaluated and output sequentially line-by-line without buffering rows in memory.
