// Program to perform all arithmatic operations using switch case

#include <stdio.h>

int main(){
    char ch;
    int a, b;
    printf("Enter an operator(+, -, *, /) to perform calculation:\n");
    scanf("%c", &ch);
    printf("Enter two numbers a & b:\n");
    scanf("%d%d", &a, &b);
    switch(ch){
        case '+':
            printf("The result %d %c %d is %d\n", a, ch, b, a+b);
            break;
        case '-':
            printf("The result %d %c %d is %d\n", a, ch, b, a-b);
            break;
        case '*':
            printf("The result %d %c %d is %d\n", a, ch, b, a*b);
            break;
        case '/':
            printf("The result %d %c %d is %d\n", a, ch, b, a/b);
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}
