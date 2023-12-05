// 这是文件 oj1144.cpp 的内容
#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char str[N];
	gets(str);
	int n;
	n=strlen(str)-1;
	int i,j,flag=0;
	for(i=0,j=n;str[i]!='\0';i++,j--)
	if(str[i]!=str[j])
	flag=1;
    if(flag==0)
	printf("Yes\n");
    else
	printf("No\n");
    return 0;
}
