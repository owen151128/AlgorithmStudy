//
// Created by Sangmin Shim on 2021/10/13.
//

#include "owenScan.h"

void scanInt(int *ptr) {
    static const int INPUT_SIZE = 30;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    *ptr = (int) strtol(input, NULL, 10);
}