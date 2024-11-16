#include <stdio.h>

int main() {

	printf("Default: [%d]\n", 42);
    printf("Left-aligned (-): [%-10d]\n", 42);
    printf("Zero-padded (0): [%010d]\n", 42);
    printf("Width and precision (.): [%10.2f]\n", 42.12345);
    printf("Alternate form (#): [%#x]\n", 42);
    printf("Sign (+): [%+d]\n", 42);
    printf("Combination (-, 0, +): [%-+010d]\n", 42);

    return 0;
}
