// 这是文件 oj1190.cpp 的内容
#include <stdio.h>
#define N 100
int main()
{
    char str[N];
    gets(str);
    int i, flag = 1; 
    if (!('a' <= str[0] && str[0] <= 'z') && !('A' <= str[0] && str[0] <= 'Z') && str[0] != '_') 
    flag = 0;
    for (i = 1; str[i] != '\0'; i++)
    {
        if (!('a' <= str[i] && str[i] <= 'z') && !('A' <= str[i] && str[i] <= 'Z') && 
            !('0' <= str[i] && str[i] <= '9') && str[i] != '_') {
            flag = 0;
            break; 
        }
    }
    if (flag == 0) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    return 0;
}
