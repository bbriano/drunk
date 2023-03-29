// Drunk randomize character case.
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main() {
	// Seed to current microsecond.
	struct timeval tv;
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);

	for (char c = getchar(); c != EOF; c = getchar()) {
		bool heads = rand()%2;
		if (heads && isupper(c)) {
			c += 'a' - 'A';
		} else if (heads && islower(c)) {
			c += 'A' - 'a';
		}
		putchar(c);
	}
}
