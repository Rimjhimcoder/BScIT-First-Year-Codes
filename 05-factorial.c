#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;   // factorial store karne ke liye
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // n = 0 ya negative hua to
    if(n < 0) {
        printf("Factorial of negative number doesn't exist\n");
    }
    else {
        // loop chala ke factorial nikalo
        for(i = 1; i <= n; i++) {
            fact = fact * i;   // fact = fact * i
        }
        printf("Factorial of %d = %d\n", n, fact);
    }
    
    return 0;
}