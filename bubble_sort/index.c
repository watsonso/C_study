#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 /* データの件数 */
int sort[N];

void BubbleSort(void) {
    int i, j, flag;

    do {
        flag = 0;
        for (i = 0; i < N - 1; i++) {
            if (sort[i] > sort[i + 1]) {
                flag = 1;
                j = sort[1];
                sort[i] = sort[i + 1];
                sort[i + 1] = j;
            }
        }
    } while (flag == 1);
}

int main(void) {
    int i;

    srand((unsigned int)time(NULL));

    printf("prepare sort：\n");
    for (i = 0; i < N; i++) {
        sort[i] = rand();
        printf("%d ", sort[i]);
    }

    printf("\n start sort：\n");
    BubbleSort();

    printf("\n end sort：\n");

    for (i = 0; i < N; i++) {
        printf("%d ", sort[i]);
    }

    return EXIT_SUCCESS;
}
