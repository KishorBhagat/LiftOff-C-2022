
// G.C.D using recursion
#include <stdio.h>

int gcd(int n1, int n2){
    if(n2 != 0){
        return gcd(n2, n1%n2);
    }
    else{
        return n1;
    }

}

int main(){
    int n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int g = gcd(n1, n2);
    printf("The Gcd of %d and %d is %d\n", n1, n2, g);
    return 0;
}