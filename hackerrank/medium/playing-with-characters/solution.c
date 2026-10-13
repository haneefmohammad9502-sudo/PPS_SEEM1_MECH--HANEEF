#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    // Read the character
    scanf("%c", &ch);
    
    // Read the single-word string
    scanf("%s", s);
    
    // Consume the leftover newline character before reading the sentence
    scanf("\n");
    
    // Read the sentence (including spaces)
    scanf("%[^\n]%*c", sen);

    // Print the outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
