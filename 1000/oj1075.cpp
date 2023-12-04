// 这是文件 oj1075.cpp 的内容
#include<stdio.h>
#include<math.h>
int main()
{
	int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year,day,month,d;
	int i;
	scanf("%d%d",&year,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		for(i=0;day>=s[i];i++)
	day=day-a[i];
	month=i+1;
	printf("%d-%d-%d",year,month,day);
	}
	else
	{for(i=0;day>=s[i];i++)
	day=day-s[i];
	month=i+1;
	printf("%d-%d-%d",year,month,day);
	}
	return 0;
}
