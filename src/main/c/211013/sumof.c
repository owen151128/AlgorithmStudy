//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int sumOf(int a, int b) {
    int big = a >= b ? a : b;
    int small = a + b - big;

    return (big + small) * ((big - small) / 2) + ((big - small + 1) % 2 == 1 ? (big + small) / 2 : 0);
}

int main(void) {
    int a = 0;
    int b = 0;

    printf("a, b를 입력하세요 : ");
    scanInts(2, &a, &b);

    printf("정답은 %d 입니다.\n", sumOf(a, b));

    return 0;
}