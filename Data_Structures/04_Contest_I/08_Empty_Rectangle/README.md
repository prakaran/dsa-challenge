# H. Empty Rectangle

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given two integers \(N\) and \(M\). Print a hollow rectangle of \(N\) rows and \(M\) columns using the character `^` such that:
* The border of the rectangle consists of `^` characters.
* The inside of the rectangle consists of spaces.
* Each of the \(N\) lines must contain exactly \(M\) characters.

## Input
The only line contains two integers \(N\) and \(M\) (\(1 \le N, M \le 1000\)).

## Output
Print the required rectangle.

## Examples

### Example 1
**Input:**
```text
4 5
```

**Output:**
```text
^^^^^
^   ^
^   ^
^^^^^
```

### Example 2
**Input:**
```text
1 5
```

**Output:**
```text
^^^^^
```

---

## My Solution Notes
* **Edge Case Handling:** When \(N = 1\), \(N = 2\), \(M = 1\), or \(M = 2\), the internal space logic changes. An elegant way to handle this without complex nested `if` statements is to check individual coordinates. 
* **Row-by-Row Logic:** For each row \(r\) (from $0$ to $N-1$) and column \(c\) (from $0$ to $M-1$):
  * Print `^` if it is a border element: \(r == 0\) or \(r == N-1\) or \(c == 0\) or \(c == M-1\).
  * Otherwise, print a space `' '`.
* **Fast I/O Optimization:** With dimensions up to $1000 \times 1000$, the program might print up to $1,000,000$ characters. Make sure to use fast I/O in C++ (`std::ios_base::sync_with_stdio(false); cin.tie(NULL);`) and avoid `std::endl` to comfortably pass within the 1-second time limit.
* **Time Complexity:** $\mathcal{O}(N \times M)$ — Every character position in the matrix is visited and printed exactly once.
* **Space Complexity:** $\mathcal{O}(1)$ — The rectangle can be generated and streamed directly to the output row by row without being stored in a 2D array.
