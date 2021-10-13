//
// Created by Sangmin Shim on 2021/10/13.
//

#include <stdio.h>
#include <stdlib.h>

void checkBiggerThenMax(int *max, int num) {
    *max = num >= *max ? num : *max;
}

int max4(int a, int b, int c, int d) {
    int max = 0;

    checkBiggerThenMax(&max, a);
    checkBiggerThenMax(&max, b);
    checkBiggerThenMax(&max, c);
    checkBiggerThenMax(&max, d);

    return max;
}

void scanInt(int *ptr) {
    static const int INPUT_SIZE = 30;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    *ptr = (int) strtol(input, NULL, 10);
}

int main(void) {
    int a, b, c, d;

    printf("네 정수의 최댓값을 구합니다.\n");
    printf("a의 값 : ");
    scanInt(&a);
    printf("b의 값 : ");
    scanInt(&b);
    printf("c의 값 : ");
    scanInt(&c);
    printf("d의 값 : ");
    scanInt(&d);

    printf("최댓값은 %d 입니다.\n", max4(a, b, c, d));

    return 0;
}