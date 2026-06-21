# K. Arrow

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\). Print an arrow pattern using the character `>` of height \(2N - 1\).

* **Important:** Do not print trailing spaces at the end of lines.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 100\)).

## Output
Print the required pattern of \(2N - 1\) lines.

## Examples

### Example 1
**Input:**
```text
5
```

**Output:**
```text
>
 > >
  >   >
   >     >
    >       >
   >     >
  >   >
 > >
>
```

---

## My Solution Notes
* **Pattern Analysis:** The arrow pattern expands symmetrically up to row \(N\), then shrinks back. It consists of an upper half of \(N\) rows and a lower half of \(N - 1\) rows.
* **Row Elements Formulation:**
  * For a given 0-indexed distance $i$ from the top or bottom outer boundaries ($i$ ranges from $0$ to $N - 1$):
    * **Leading Spaces:** Exactly $i$ space characters.
    * **First Character:** Always a single `>`.
    * **Internal Spaces:** If $i > 0$, it is followed by exactly $2i - 1$ space characters, capped off with a final `>`. If $i = 0$, only the single initial `>` is printed.
* **Time Complexity:** $\mathcal{O}(N^2)$ — With $N \le 100$, the maximum number of characters printed per row is $3N$, resulting in a highly negligible execution time well under the 1-second limit.
* **Space Complexity:** $\mathcal{O}(1)$ — Characters can be computed and printed line-by-line without being stored in extra structures.
