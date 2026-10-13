# Array Reversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sentence, $s$, print each word of the sentence in a new line.

**Input Format**

The first and only line contains a sentence, $s$.

**Constraints**

$ 1 \le len(s) \le 1000$  

**Output Format**

Print each word of the sentence in a new line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T13:47:26.997Z  

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (int i = 0; i < num / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + num - 1 - i);
        *(arr + num - 1 - i) = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-tokens-/problem)