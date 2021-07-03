// Drunkcase randomly change character case.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char c;

    srand(time(NULL));

    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putchar(rand()%2 ? c : c+'a'-'A');
        } else if (c >= 'a' && c <= 'z') {
            putchar(rand()%2 ? c : c-'a'+'A');
        } else {
            putchar(c);
        }
    }
}
