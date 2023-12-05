// 这是文件 oj1201.cpp 的内容
#include <stdio.h>
#include <string.h>
#define N 100
int main() {
    char strings[5][N];
    char shortest[N];
    int i;
    for (i = 0; i < 5; i++) {
        gets(strings[i]);
    }
    strcpy(shortest, strings[0]);
    for (i = 1; i < 5; i++) {
        if (strlen(strings[i]) < strlen(shortest)) 
        strcpy(shortest, strings[i]);
        
    }
    printf("%s\n", shortest);
    return 0;
}
