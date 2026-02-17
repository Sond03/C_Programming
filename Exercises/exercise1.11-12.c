/* Exercise 1-11. How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any? 

Answer: type -1 could be a way to check if it checks the input i would assume the program crashes you could also test for long lines or other letters that the program might not think of 


Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (isspace(c)) { // found that isspace is a smart way to separate words and it was very very very easy compared to doing it manually
            putchar('\n'); 
        } else {
            putchar(c);   
        }
    }

    return 0;
}
