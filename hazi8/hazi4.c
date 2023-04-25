#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(int argc, char *argv[]) {
    if (argc == 1) { // Nincs parancssori argumentum
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1; // 1-es hibakód
    }
    int i, shortest_len = strlen(argv[1]);
    for (i = 2; i < argc; i++) {
        int len = strlen(argv[i]);
        if (len < shortest_len) {
            shortest_len = len;
        }
    }
    for (i = 1; i < argc; i++) {
        if (strlen(argv[i]) == shortest_len) {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}

