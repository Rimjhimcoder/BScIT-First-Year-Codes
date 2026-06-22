#include <stdio.h>

int main() {
    int num, i, flag = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num == 0 || num == 1) {
        flag = 1;
    }
    
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
        printf("%d is a PRIME number 👑\n", num);
    else
        printf("%d is NOT PRIME 😅\n", num);
        
    printf("// Coded by RimjhimCoder - NKT BSc IT 💚\n");
    return 0;
}