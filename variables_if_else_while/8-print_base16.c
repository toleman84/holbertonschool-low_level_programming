#include <stdio.h>

int main() {
    int i;
    char letter;

    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
    }
    for (letter = 'a'; letter <= 'f'; letter++) {
        putchar(letter);
    }
    putchar('\n');
    return (0);
}
