
//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int main(void) {
    int w = 0;
    int h = 0;

    printf("직사각형을 출력합니다.\n높이 : ");
    scanInt(&h);
    printf("너비 : ");
    scanInt(&w);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}