// 这是文件 oj1172.cpp 的内容
#include<stdio.h>
#define N 1000
int main()
{
	int ten, eight[1000];
    int i,j;
	scanf("%d",&ten);
	for(i=0;ten!=0;i++)
    {
		eight[i]=ten%8;
		ten=ten/8;
	}
    for(j=i-1;j>=0;j--)
	printf("%d ",eight[j]);
	printf("\n");
	return 0;
}
