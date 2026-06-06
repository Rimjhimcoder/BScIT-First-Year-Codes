#include <stdio.h>

int main() {
    int a = 25, b = 42, c = 17; // Rimjhim yahan numbers change kar sakti hai
    
    printf("=== Find Largest Number - By Rimjhimcoder 👑 ===\n");
    printf("Numbers: %d, %d, %d\n\n", a, b, c);
    
    if(a >= b && a >= c) {
        printf("Largest number is: %d ✅\n", a);
    }
    else if(b >= a && b >= c) {
        printf("Largest number is: %d ✅\n", b);
    }
    else {
        printf("Largest number is: %d ✅\n", c);
    }
    
    printf("\nCode by Rimjhimcoder BScIT 🚀\n");
    return 0;
}