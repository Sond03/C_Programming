/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
#include <stdio.h>
int main(int argc, char *argv[]){
    int c = 0, blankCount = 0, tabCount = 0, newlineCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == 'q') {
            printf("blank lines:%d tabs:%d newlines:%d\n", blankCount, tabCount, newlineCount);
            break;
        }
        else if (c == '\n') {
            newlineCount++; 
        } 
        else if (c == '\t') {
            tabCount++;
        }
        else if(c == ' '){
            blankCount++;
        }
    }
    return 0;
}
