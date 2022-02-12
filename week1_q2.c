// Program to print the maximum number between two numbers

#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);
    if(n1>n2){
        printf("The maximum number between %d and %d is %d\n", n1, n2, n1);
    }
    else
    if(n2>n1){
        printf("The maximum number between %d and %d is %d\n", n1, n2, n2);
    }
    else{
        printf("The numbers %d and %d are equal.\n", n1, n2);
    }
    return 0;
}
