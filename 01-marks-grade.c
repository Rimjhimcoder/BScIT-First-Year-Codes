#include <stdio.h>

int main() {
    int marks = 61;
    if(marks >= 90) {
        printf("Rimjhim A+ Grade! Topper 👑\n");
    } else if(marks >= 75) {
        printf("Rimjhim A Grade! Shabaash 🔥\n");
    } else if(marks >= 40) {
        printf("Rimjhim B Grade! Pass ho gayi ✅\n");
    } else {
        printf("Rimjhim, aur padhna padega 📚\n");
    }
    return 0;
}