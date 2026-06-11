# P. Student Performance Evaluation

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given the marks obtained by a student. Based on the marks, display an appropriate performance message according to the following criteria:

| Condition | Performance Message |
| :--- | :--- |
| marks > 90 | `Excellent` |
| 80 < marks ≤ 90 | `Good` |
| 70 < marks ≤ 80 | `Fair` |
| 60 < marks ≤ 70 | `Meets Expectations` |
| marks ≤ 60 | `Below Par` |

## Input
A single integer marks (0 ≤ marks ≤ 100).

## Output
Print a single line containing the performance message corresponding to the given marks.

## Examples

### Example 1
**Input:**
```text
85
```
**Output:**
```text
Good
```

### Example 2
**Input:**
```text
99
```
**Output:**
```text
Excellent
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Evaluating a chained conditional `if / else-if / else` structure checks a few boundaries sequentially and resolves in constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single primitive integer variable is used to store the score.
* **Logic Tip:** By ordering your `if` statements from highest to lowest (starting with $\text{marks} > 90$), you do not need to explicitly check both limits using the logical AND (`&&`) operator. Once a higher boundary fails, the program automatically knows the score is less than or equal to that boundary.
