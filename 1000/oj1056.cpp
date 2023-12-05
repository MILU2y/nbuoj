// 这是文件 oj1056.cpp 的内容
#include <stdio.h>
#define N 1000
int main()
{
	char str[N];
	gets(str);
	char key;
	key=getchar();
	int i=0, count=0;
	for(i;str[i]!='\0';i++)
	if(key==str[i])
	count++;
    printf("%d\n",count);
	return 0;
}
