// Enter and print personal information

#include <stdio.h>

int main(){
    char name[20];
    char branch[50];
    char hobbies[50];
    int regd;
    printf("Enter your name:\n");
    gets(name);
    printf("Enter your branch:\n");
    gets(branch);
    printf("Enter your Regd no.:\n");
    scanf("%d", &regd);
    getchar();
    printf("Enter your Hobbies:\n");
    gets(hobbies);
    printf("\nName: %s\n", name);
    printf("Branch: %s\n", branch);
    printf("Regd no.: %d\n", regd);
    printf("Hobbies: %s\n", hobbies);
    return 0;
}
