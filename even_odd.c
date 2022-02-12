// program to find whether a number is even or odd using Switch case

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    switch(n%2) //this will return either 0 or 1
    {
        case 0:
            printf("%d is an even.\n",n);
            break;
        case 1:
            printf("%d is an odd.\n",n);
            break;
    }

    return 0;
}