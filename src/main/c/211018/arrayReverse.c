//
// Created by Sangmin Shim on 2021/10/18.
//

#include <time.h>
#include "../utils/owenScan.h"

int getRandomDecimal(int start, int end) {
    return rand() % (end + 1 - start) + start;
}

int getRandomInt(int start, int end) {
    int random = rand() % (end + 1 - start) + start;;

    switch (rand() % 2) {
        case 0:
            return random;
        case 1:
            return random * -1;
    }
}

int main(void) {
    srand(time(NULL));

    int arraySize = getRandomDecimal(10, 20);
    int array[arraySize];
    int temp;
    int swapIndex;

    for (int i = 0; i < arraySize; i++) {
        array[i] = getRandomInt(10, 99);
        printf("%d ", array[i]);
    }

    for (int i = 0; i < arraySize / 2; i++) {
        printf("\n");
        swapIndex = arraySize - 1 - i;
        temp = array[i];
        array[i] = array[swapIndex];
        array[swapIndex] = temp;

        printf("array[%d]과 array[%d]를 교환합니다.\n", i, swapIndex);

        for (int j = 0; j < arraySize; j++) {
            printf("%d ", array[j]);
        }
    }

    printf("\n역순 정렬을 종료합니다.\n");

    return 0;
}