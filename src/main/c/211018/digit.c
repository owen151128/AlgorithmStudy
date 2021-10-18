//
// Created by Sangmin Shim on 2021/10/18.
//

#include "../utils/owenScan.h"

int dToC(unsigned int x, int n, char d[]) {
    char dChar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxyz";
    int i = 0;

    if (x == 0) {
        d[i++] = dChar[0];
    } else {
        while (x) {
            d[i++] = dChar[x % n];
            x /= n;
        }
    }

    return i;
}

char *decimalToDigit(unsigned int decimal, int digit) {
    const char *digitStr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxyz";
    char *result = NULL;
    unsigned int tmp = decimal;
    char swap;
    int swapIndex;
    int len = 0;
    int i = 0;

    if (decimal != 0) {
        while (tmp) {
            tmp /= digit;
            len++;
        }
        result = malloc(sizeof(char) * len);
        while (decimal) {
            result[i++] = digitStr[decimal % digit];
            decimal /= digit;
        }

        for (int j = 0; j < len / 2; j++) {
            swapIndex = len - 1 - j;
            swap = result[j];
            result[j] = result[swapIndex];
            result[swapIndex] = swap;
        }

        return result;
    } else {
        return "0";
    }
}

int main(void) {
    char *result = malloc(sizeof(char) * 512);
    int i = dToC(5424555, 16, result);

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }

    free(result);

    result = decimalToDigit(5424555, 16);
    printf("\n%s\n", result);

    free(result);

    return 0;
}