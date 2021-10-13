//
// Created by Sangmin Shim on 2021/10/13.
//

#include "owenScan.h"

static const int INPUT_SIZE = 30;
static char input[30];

char *getString() {
    fgets(input, INPUT_SIZE, stdin);

    return input;
}

void scanInt(int *ptr) {
    *ptr = (int) strtol(getString(), NULL, 10);
}

void scanInts(int argc, ...) {
    va_list args;
    va_start(args, argc);
    char *str = getString();
    char *current = str;
    char *endPtr = NULL;
    int *ptr = NULL;

    for (int i = 0; i < argc; i++) {
        ptr = va_arg(args, int*);

        if (i > argc - 2) {
            endPtr = NULL;
        }

        *ptr = (int) strtol(current, &endPtr, 10);
        current = endPtr;
    }

    va_end(args);
}