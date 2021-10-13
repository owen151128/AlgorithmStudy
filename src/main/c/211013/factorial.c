//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int factorial(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
        if (i >= n) {
            printf("%d = %d\n", i, result);
        } else {
            printf("%d + ", i);
        }
    }

    return result;
}

int main(void) {
    int n = 0;
    printf("n을 입력하세요 : ");
    scanInt(&n);

    printf("%d! = %d 입니다.\n", n, factorial(n));

    return 0;
}