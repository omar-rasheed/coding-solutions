# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T06:12:09.309Z  

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            // Find distance to the closest border (top, bottom, left, right)
            int min_dist = row;
            if (col < min_dist) min_dist = col;
            if (size - 1 - row < min_dist) min_dist = size - 1 - row;
            if (size - 1 - col < min_dist) min_dist = size - 1 - col;

            // Value starts at n and decreases based on distance from the border
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)