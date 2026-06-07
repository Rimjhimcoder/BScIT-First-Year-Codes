#include <stdio.h>

int main() {
    int n = 10; // Kitne fibonacci numbers chahiye
    int first = 0, second = 1, next;
    
    printf("Rimjhim's Fibonacci Series up to %d terms:\n", n);
    
    for(int i = 0; i < n; i++) {
        if(i <= 1) {
            next = i; // Pehle 2 terms: 0 aur 1
        } else {
            next = first + second; // Baaki terms = pichle 2 ka sum
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    
    printf("\nCode by Rimjhimcoder 👑\n");
    return 0;
}