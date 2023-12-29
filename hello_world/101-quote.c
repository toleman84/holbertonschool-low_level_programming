#include "unistd.h"

int main(void) {
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, message, sizeof(message) - 1); /*Write to stderr (file descriptor 2)*/
    return (1);
}
