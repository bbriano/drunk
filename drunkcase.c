#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Reads characters from stdin and outputs the same character randomly
 * Uppercased or lowercased if its a valid ascii character
 */
int main() {
    char c;

    srand(time(NULL)); // Seed random generator

    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putchar(rand() % 2 ? c : c + 'a' - 'A');
        } else if (c >= 'a' && c <= 'z') {
            putchar(rand() % 2 ? c : c - 'a' + 'A');
        } else {
            putchar(c);
        }
    }
}
