// 这是文件 oj1157.cpp 的内容
#include <stdio.h>
int main()
{
	int s[10],i;
	int max,maxindex,min,minindex;
	for(i=0;i<10;i++)
	scanf("%d",&s[i]);
	max=s[0]; min=s[0];
	for(i=1;i<10;i++)
	if(s[i]>max)
	{max=s[i];maxindex=i;}
	printf("%d% d\n",max,maxindex);
	for(i=1;i<10;i++)
	if(s[i]<min)
	{min=s[i];minindex=i;}
    printf("%d %d\n",min,minindex);
	return 0;
}
