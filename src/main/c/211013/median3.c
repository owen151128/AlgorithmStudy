//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

int median3(int a, int b, int c) {
    if (a >= b)
        if (b >= c) {
            return b;
        } else if (a <= c) {
            return a;
        } else {
            return c;
        }
    else if (a > c) {
        return a;
    } else if (b > c) {
        return c;
    } else {
        return b;
    }
}

int main(void) {
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 2, 1, median3(3, 2, 1));  /* [A] a > b > c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 2, 2, median3(3, 2, 2));  /* [B] a > b = c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 1, 2, median3(3, 1, 2));  /* [C] a > c > b */
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 2, 3, median3(3, 2, 3));  /* [D] a = c > b */
    printf("median3 (%d %d %d) = %d 입니다.\n", 2, 1, 3, median3(2, 1, 3));  /* [E] c > a > b */
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 3, 2, median3(3, 3, 2));  /* [F] a = b > c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 3, 3, 3, median3(3, 3, 3));  /* [G] a = b = c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 2, 2, 3, median3(2, 2, 3));  /* [H] c > a = b */
    printf("median3 (%d %d %d) = %d 입니다.\n", 2, 3, 1, median3(2, 3, 1));  /* [I] b > a > c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 2, 3, 2, median3(2, 3, 2));  /* [J] b > a = c */
    printf("median3 (%d %d %d) = %d 입니다.\n", 1, 3, 2, median3(1, 3, 2));  /* [K] b > c > a */
    printf("median3 (%d %d %d) = %d 입니다.\n", 2, 3, 3, median3(2, 3, 3));  /* [L] b = c > a */
    printf("median3 (%d %d %d) = %d 입니다.\n", 1, 2, 3, median3(1, 2, 3));  /* [M] c > b > a */

    return 0;
}