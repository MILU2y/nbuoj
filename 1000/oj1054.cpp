// 这是文件 oj1054.cpp 的内容
#include <stdio.h>
#define N 1000
int main()
{
	char str[N];
	gets(str);
	int i ,j;
	int flag=0;
	for(i=0,j=1;str[j]!='\0';i++,j++)
	if(str[i]==str[j])
	{printf("%c\n",str[i]);flag=1;break;}
	if(flag==0)
	printf("No\n");
	return 0;
}
