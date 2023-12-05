// 这是文件 oj1167.cpp 的内容
#include<stdio.h>
int main()
{
	double sum=0.00, RMB[10]={0.1,0.2,0.5,1,2,5,10,20,50,100};
	int index, num;
	for(;;)
	{
	scanf("%d%d",&index,&num);
	if(index>0&&num>0)
    {index-=1;
    sum+=num*RMB[index];}
	else break;
	}
	printf("%.2lf\n",sum);
	return 0;
}
