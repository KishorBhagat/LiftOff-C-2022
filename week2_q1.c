// Program to take two strings, concatenate them and reverse it.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20]; 
    printf("Enter a String:\n");  
    gets(str1); 
    printf("Enter another String:\n");  
    gets(str2);
    printf("The string after concatenation is:\n");
    strcat(str1, str2);
    puts(str1);
    printf("The string after reversing is:\n");
    strrev(str1);
    puts(str1);
    return 0;
}