#include <stdio.h>
#include <stdlib.h> // Required for abs()

void update(int *a,int *b) {
    // Store the original values temporarily to compute sum and absolute difference
    int sum = *a + *b;
    int abs_diff = abs(*a - *b);
    
    // Update the values at the pointers
    *a = sum;
    *b = abs_diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
