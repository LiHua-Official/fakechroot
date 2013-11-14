#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "../../src/strlcpy.c"
#include "../../src/de_dotdot.c"

int main (int argc, char *argv[]) {
    char *path;

    if (argc < 2 || argc > 2) {
        fprintf(stderr, "Usage: %s path\n", argv[0]);
        exit(2);
    }

    path = argv[1];

    de_dotdot(path);
    printf("%s\n", path);

    return 0;
}
