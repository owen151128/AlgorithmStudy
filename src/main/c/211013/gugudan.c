//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int main(void) {
    printf("\t|\t");
    for (int i = 1; i <= 9; i++) {
        printf("%d\t", i);
    }
    printf("\n----+-------------------------------------\n");
    for (int i = 1; i <= 9; i++) {
        printf("%d\t|\t", i);
        for (int j = 1; j <= 9; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}