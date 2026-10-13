#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
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
