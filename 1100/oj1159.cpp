// 这是文件 oj1159.cpp 的内容
#include<stdio.h>
#define N 10000
int main()
{
	char str[N];
	gets(str);
	int num[26]={0};
	int i,digital;
	char letter;
	for(i=0;str[i]!='\0';i++)
	{
	if('a'<=str[i]&&str[i]<='z')
	{digital=str[i]-'a';
	num[digital]+=1;}
    if('A'<=str[i]&&str[i]<='Z')
	{digital=str[i]-'A';
	num[digital]+=1;}
	}
	for(i=0;i<26;i++)
	{if(num[i]!=0)
	{letter='A'+i;
	printf("'%c':%d\n",letter,num[i]);}
	}
	return 0;
}
