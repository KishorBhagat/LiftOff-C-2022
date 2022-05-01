// Swap using function

#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Enter value of a:\n");
    scanf("%d", &a);
    printf("Enter value of b:\n");
    scanf("%d", &b);
    printf("Befor swapping: a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d and b = %d\n", a, b);

    return 0;
}