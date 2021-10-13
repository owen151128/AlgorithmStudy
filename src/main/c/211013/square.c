//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int main(void) {
    int n = 0;

    printf("사각형을 출력합니다.\n입력할 수 : ");
    scanInt(&n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}