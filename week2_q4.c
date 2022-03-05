// Fibonacci Series
#include <stdio.h>

int main(){
    int a = 0, b = 1, c, n;
    printf("Enter the number of terms of Fibonacci Series:\n");
    scanf("%d", &n);
    printf("%d ", a);
    printf(", %d ", b);
    for(int i = 3; i<=n; i++){
        c = a + b;
        a = b; 
        b = c;
        printf(", %d", c);
    }
    return 0;
}