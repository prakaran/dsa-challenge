# G. Print Primes from 1 to N

| Attribute | Specification |
| :--- | :--- |
| **Time Limit per Test** | 1 second |
| **Memory Limit per Test** | 256 megabytes |

## Problem Description
You are given an integer \(N\).

Print all prime numbers from 1 to \(N\) in increasing order by writing a function that takes \(N\) as a parameter and prints the required primes.

## Input
The only line contains an integer \(N\) (\(1 \le N \le 10^3\)).

## Output
Print all prime numbers from 1 to \(N\) in increasing order, separated by single spaces.

If there is no prime number in the range, print nothing.

## Examples

### Example 1
**Input:**
```text
10
```

**Output:**
```text
2 3 5 7
```

---

## My Solution Notes
* **Edge Cases:** If $N < 2$, your program should print nothing. Remember that $1$ is not a prime number.
* **Time Complexity:** 
  * $\mathcal{O}(N\sqrt{N})$ if you reuse your prime-checking function for every number from $2$ to $N$. Given $N \le 10^3$, this takes at most $\approx 31,000$ operations, which easily runs in less than a millisecond.
  * $\mathcal{O}(N \log \log N)$ if you choose to use the Sieve of Eratosthenes algorithm.
* **Space Complexity:** 
  * $\mathcal{O}(1)$ if checking and printing each prime on the fly.
  * $\mathcal{O}(N)$ if tracking prime states with a boolean array or vector.
