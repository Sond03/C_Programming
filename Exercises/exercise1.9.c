/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */

#include <stdio.h>
int main(int argc, char *argv[]){
    int c = 0, pchar = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && pchar == ' ') {
           pchar = c;
           continue;
        }
        printf("%c", c);
        pchar = c;
    }

    return 0;
}
