#include <stdio.h>

int main() {
    int a = 20, b = 10; // Rimjhim yahan numbers change kar sakti hai
    
    printf("=== Calculator by Rimjhimcoder 👑 ===\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n\n", b);
    
    printf("Addition: %d + %d = %d ✅\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d ✅\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d ✅\n", a, b, a * b);
    
    if(b != 0) {
        printf("Division: %d / %d = %d ✅\n", a, b, a / b);
    } else {
        printf("Division: Cannot divide by zero ❌\n");
    }
    
    printf("\nCode by Rimjhimcoder BScIT 🚀\n");
    return 0;
}