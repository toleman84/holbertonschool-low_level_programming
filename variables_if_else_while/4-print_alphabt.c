#include <stdio.h>

int main() {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        if ( letter != 'e' && letter != 'q') {
            putchar(letter);
        }
    }
    putchar('\n');
    return (0);
}
