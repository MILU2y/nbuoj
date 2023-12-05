// 这是文件 oj1148.cpp 的内容
#include <stdio.h>
#include <string.h>
#define N 1000
int main() {
    char str[N];
    gets(str);
    int i;
    int num[10] = {0};
    for (i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            int digit = str[i] - '0'; 
            num[digit] += 1;
        }
    }
    for (i = 0; i < 10; i++) {
        if (num[i] != 0) {
            printf("%d:%d\n", i, num[i]);
        }
    }
    return 0;
}
