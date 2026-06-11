# Q. Find the location point

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given the coordinates of a point \((X, Y)\) on a Cartesian plane. Your task is to determine the exact location of the point based on the following classification rules:

| Condition | Location |
| :--- | :--- |
| \(X = 0\) and \(Y = 0\) | `Origin` |
| \(Y = 0\) and \(X \neq 0\) | `X axis` |
| \(X = 0\) and \(Y \neq 0\) | `Y axis` |
| \(X > 0\) and \(Y > 0\) | `1st Quadrant` |
| \(X < 0\) and \(Y > 0\) | `2nd Quadrant` |
| \(X < 0\) and \(Y < 0\) | `3rd Quadrant` |
| \(X > 0\) and \(Y < 0\) | `4th Quadrant` |

## Input
A single line containing two integers \(X\) and \(Y\) (\(-10^9 \le X, Y \le 10^9\)).

## Output
Print a single line indicating the location of the point.

## Examples

### Example 1
**Input:**
```text
1 10
```
**Output:**
```text
1st Quadrant
```

### Example 2
**Input:**
```text
0 0
```
**Output:**
```text
Origin
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Evaluating a series of up to seven simple coordinate comparisons takes constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Primitive memory allocation for the two coordinate inputs remains stable.
* **Data Types:** The coordinate coordinates range down to \(-10^9\) and up to \(10^9\). A standard signed 32-bit `int` container safely handles this range (as it holds up to $\approx \pm 2 \times 10^9$).
