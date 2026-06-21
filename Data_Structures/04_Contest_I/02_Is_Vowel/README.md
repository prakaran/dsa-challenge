# B. Is Vowel?

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given a lowercase English letter. Your task is to determine whether the given character is a vowel or not.

The English vowels are: `a`, `e`, `i`, `o`, and `u`.

## Input
The only line contains a single lowercase English letter.

## Output
Print `YES` if the character is a vowel, otherwise print `NO`.

## Examples

### Example 1
**Input:**
```text
a
```

**Output:**
```text
YES
```

### Example 2
**Input:**
```text
b
```

**Output:**
```text
NO
```

---

## My Solution Notes
* **Time Complexity:** $\mathcal{O}(1)$ — Checking membership in a small static set takes constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — Only a single character variable is stored in memory.
