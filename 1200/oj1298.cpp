// 这是文件 oj1298.cpp 的内容
#include <stdio.h>
int main()
{
	int a[5][5];
	int i , j;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
    for(j=i+1;j<5;j++)
	a[i][j]=0;
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	printf("%4d",a[i][j]);
	printf("\n");}
	return 0;
}
