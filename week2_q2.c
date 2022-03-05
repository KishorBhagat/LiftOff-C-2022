#include <stdio.h>

int main(){
    int odd = 0, even = 0;
    printf("Enter 10 integers:\n");
    for(int i = 1; i<=10; i++){
        int n;
        scanf("%d", &n);
        if(n%2==0){
            even = even + n;
        }
        else{
            odd = odd + n;
        }
    }
    printf("Sum of even number is %d.\n", even);
    printf("Sum of odd number is %d.\n", odd);
    return 0;
}