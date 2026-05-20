//  Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include "include/exercise1.13.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
    int *lengths = input(argc, argv);

    for (int i = 1; i < MAX_LEN; i++) {
        if (lengths[i] > 0){
            printf("%d: ", i);

            for (int j = 0; j < lengths[i]; j++) {
                putchar('*');
            }

            putchar('\n');
        }
    }
    free(lengths);
    return 0;
}


int *input(int argc, char *argv[]){
    int *lengths = calloc(100, sizeof(int));
    if (!lengths) {
        perror("calloc");
        exit(EXIT_FAILURE);
    }
    if (argc < 2) {
        fprintf(stderr, "Usage:%s < Words >\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++) {
        int len = strlen(argv[i]);
        if (len < 100) {
            lengths[len]++;
        }
    }
    return lengths;
}
