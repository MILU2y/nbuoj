// 这是文件 oj1315.cpp 的内容
#include<stdio.h>
#define N 1001
int main()
{
	char str[N];
	gets(str);
	int i,num=0;
	for(i=0;str[i]!='\0';i++)
	{
		if('0'<=str[i]&&str[i]<='9')
		{num++;
		for(;'0'<=str[i]&&str[i]<='9';)
		i++;
		}
	}
	printf("%d\n",num);
	return 0;
}
