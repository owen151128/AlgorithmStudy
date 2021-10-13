//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"
#include <math.h>

int getDigit(int n) {
    if (n < 1) {
        return -1;
    }

    return (int) log10(n) + 1;
}

int main(void) {
    int n = 0;

    printf("n 을 입력하세요 : ");
    scanInt(&n);

    printf("답은 %d 입니다.\n", getDigit(n));

    return 0;
}