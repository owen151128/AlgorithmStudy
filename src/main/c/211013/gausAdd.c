//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int addGaus(int n) {
    return (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0);
}

int main(void) {
    int n = 0;
    printf("n을 입력하세요 : ");
    scanInt(&n);

    printf("답은 %d 입니다.\n", addGaus(n));

    return 0;
}