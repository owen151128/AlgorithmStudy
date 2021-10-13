//
// Created by Sangmin Shim on 2021/10/13.
//

#include "../utils/owenScan.h"

void triangleLB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

void triangleLU(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

void triangleRU(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

void triangleRB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

void spira(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

void nrpira(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n + n - i * 2 - 1; j++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }

    printf("\n");
}

int main(void) {
    triangleLB(5);
    triangleLU(5);
    triangleRU(5);
    triangleRB(5);
    spira(4);
    nrpira(9);

    return 0;
}