// 这是文件 oj1122.cpp 的内容
#include <stdio.h>
#include <stdbool.h>
#define N 100
int main() {
    int bulbs[N + 1] = {0}; 
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = i; j <= n; j += i) { 
            bulbs[j] = !bulbs[j]; 
        }
    }
    int count = 0;
    for (i = 1; i <= n; ++i) {
        if (bulbs[i]) {
            count++;
        }
    }
    printf("%d\n", count);
    for (i = 1; i <=n; ++i) {
        if (bulbs[i]) {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}
