# Sum and Difference of Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array, of size $n$, reverse it.

Example: If array, $arr = [1, 2, 3, 4, 5]$, after reversing it, the array should be, $arr = [5, 4, 3, 2, 1]$.

**Input Format**

The first line contains an integer, $n$, denoting the size of the array.
The next line contains $n$ space-separated integers denoting the elements of the array.

**Constraints**

$ 1 \le n \le 1000$  
$ 1 \le arr_i \le 1000$, where $arr_i$ is the $i^{th}$ element of the array.

**Output Format**

The output is handled by the code given in the editor, which would print the array.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T13:45:38.763Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    float x, y;
    
    // Read two integers
    scanf("%d %d", &a, &b);
    
    // Read two floating-point numbers
    scanf("%f %f", &x, &y);
    
    // Print the sum and difference of integers separated by a space
    printf("%d %d\n", a + b, a - b);
    
    // Print the sum and difference of floats rounded to one decimal place
    printf("%.1f %.1f\n", x + y, x - y);
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/reverse-array-c/problem)