#include <stdio.h>

int checkPrime(int n, int i){
    if(i == 1){
        return 1;
    }
    else{
        if(n%i==0){
            return 0;
        }
        else{
            checkPrime(n, i-1);
        }
    }
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int prime = checkPrime(n, n/2);
    if(prime == 1){
        printf("%d is Prime\n", n);
    }
    else{
        printf("%d is Not prime\n", n);
    }
    return 0;
}