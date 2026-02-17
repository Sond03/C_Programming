/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.*/


#include <stdio.h>
int main(int argc, char *argv[]){
    int c = 0; 
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
            continue;
        }
        else if (c == '\b') {
            printf("\\b");
            continue;
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
            continue;
        }
        printf("%c", c);
    }
    return 0;
}
