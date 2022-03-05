#include <stdio.h>
#include <math.h>

int main(){
    int n, ctr=0, fd, ld, swap, temp;
    printf("Enter any number greater than 9:\n");
    scanf("%d", &n);
    temp = n;
    ld = n%10;
    while(temp!=0){
        temp = temp/10;
        ctr++;
    }
    fd = n / (int)pow(10, ctr-1);
    swap = ld*pow(10,ctr-1) + n%(int)pow(10,ctr-1) - ld + fd;
    printf("First Digit: %d\n", fd);
    printf("Last Digit: %d\n", ld);
    printf("%d is swapped to %d\n", n, swap);
    
    return 0;
}