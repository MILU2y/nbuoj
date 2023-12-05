// 这是文件 oj1199.cpp 的内容
#include<stdio.h>
#define N 1000
int main()
{
	char str[N];
	gets(str);
	int digital=0,character=0;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if('0'<=str[i]&&str[i]<='9')
		digital=1;
		if('a'<=str[i]&&str[i]<='z'||'A'<=str[i]&&str[i]<='Z')
		character=1;
	}
	if(digital==1&&character==0)
	printf("digit\n");
    if(digital==0&&character==1)
	printf("character\n");
    if(digital==1&&character==1)
    printf("mixed\n");
	return 0;
}
