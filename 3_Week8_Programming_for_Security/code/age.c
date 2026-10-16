/* Week 8 Activity 2 - corrected C program.
   Fix: 'int age' was missing its semicolon. */
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 0) {
        printf("You are %d years old!", age);
    }
    return 0;
}
