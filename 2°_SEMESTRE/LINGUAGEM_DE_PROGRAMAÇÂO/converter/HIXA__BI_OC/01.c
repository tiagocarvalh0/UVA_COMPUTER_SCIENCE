#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <hexadecimal number>\n", argv[0]);
        return 1;
    }

    // Convert the hexadecimal number to a long integer
    char *end;
    long n = strtol(argv[1], &end, 16);

    // Convert the long integer to binary
    int i = 0;
    int binary[64];
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    // Print the binary number
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
