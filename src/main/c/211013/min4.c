//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"
#include <limits.h>

static inline void checkSmallerThenMin(int *min, int num) {
    *min = num <= *min ? num : *min;
}

int min4(int a, int b, int c, int d) {
    int min = INT_MAX;

    checkSmallerThenMin(&min, a);
    checkSmallerThenMin(&min, b);
    checkSmallerThenMin(&min, c);
    checkSmallerThenMin(&min, d);

    return min;
}

int main(void) {
    int a, b, c, d;

    printf("네 정수의 최솟값을 구합니다.\n");
    printf("a의 값 : ");
    scanInt(&a);
    printf("b의 값 : ");
    scanInt(&b);
    printf("c의 값 : ");
    scanInt(&c);
    printf("d의 값 : ");
    scanInt(&d);

    printf("최솟값은 %d 입니다.\n", min4(a, b, c, d));

    return 0;
}