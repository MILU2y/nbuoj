// 这是文件 oj1139.cpp 的内容
#include<stdio.h>
int main()
{
	char str[9];
	gets(str);
	int i;
	for(i=0;i<9;i++)
    {
		if('a'<=str[i]&&str[i]<='v'||'A'<=str[i]&&str[i]<='V')
		str[i]+=4;
		if('w'<str[i]&&str[i]<='z'||'W'<=str[i]&&str[i]<='Z')
        str[i]=str[i]+4-26;
	}
	for(i=0;i<9;i++)
	printf("%c",str[i]);
	printf("\n");
	return 0;
}
