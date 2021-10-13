//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"
#include <limits.h>

void checkSmallerThenMin(int *min, int num) {
    *min = num <= *min ? num : *min;
}

int min3(int a, int b, int c) {
    int min = INT_MAX;

    checkSmallerThenMin(&min, a);
    checkSmallerThenMin(&min, b);
    checkSmallerThenMin(&min, c);

    return min;
}

int main(void) {
    int a, b, c;

    printf("세 정수의 최솟값을 구합니다.\n");
    printf("a의 값 : ");
    scanInt(&a);
    printf("b의 값 : ");
    scanInt(&b);
    printf("c의 값 : ");
    scanInt(&c);

    printf("최솟값은 %d 입니다.\n", min3(a, b, c));

    return 0;
}