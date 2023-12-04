#include <stdio.h>
#include <stdlib.h>

int main() {
    int start, end;
    printf("请输入第一个文件的oj序号和最后一个文件的oj序号（以空格分隔）：");
    scanf("%d %d", &start, &end);

    if (start > end) {
        printf("错误：第一个文件的oj序号应小于或等于最后一个文件的oj序号。\n");
        return 1;
    }

    int n = end - start + 1;

    for (int i = start; i <= end; ++i) {
        char filename[20];
        sprintf(filename, "oj%d.cpp", i);
        
        FILE *file = fopen(filename, "w");
        if (file == NULL) {
            printf("无法创建文件 %s\n", filename);
            exit(EXIT_FAILURE);
        }

        // 写入文件内容，这里可以根据需要写入任何内容
        fprintf(file, "// 这是文件 %s 的内容\n", filename);

        fclose(file);
        printf("已创建文件 %s\n", filename);
    }

    return 0;
}
