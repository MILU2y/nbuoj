/*
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
}*/

/*数组*/
/*
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
}*/
/*1172
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
}*/

/*
#include <stdio.h>
#include <stdbool.h>
#define N 100
int main() {
    int bulbs[N + 1] = {0}; 
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = i; j <= n; j += i) { 
            bulbs[j] = !bulbs[j]; 
        }
    }
    int count = 0;
    for (i = 1; i <= n; ++i) {
        if (bulbs[i]) {
            count++;
        }
    }
    printf("%d\n", count);
    for (i = 1; i <=n; ++i) {
        if (bulbs[i]) {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}*/

/*1167
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
}*/

/*1298
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
}*/

/*
#include <stdio.h>
#define N 1000
int main()
{
	char str[N];
	gets(str);
	char key;
	key=getchar();
	int i=0, count=0;
	for(i;str[i]!='\0';i++)
	if(key==str[i])
	count++;
    printf("%d\n",count);
	return 0;
}*/

/*
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
}*/

/*1139
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
}*/

/*1144/1145
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
}*/

/*1148
#include <stdio.h>
#include <string.h>
#define N 1000
int main() {
    char str[N];
    gets(str);
    int i;
    int num[10] = {0};
    for (i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            int digit = str[i] - '0'; 
            num[digit] += 1;
        }
    }
    for (i = 0; i < 10; i++) {
        if (num[i] != 0) {
            printf("%d:%d\n", i, num[i]);
        }
    }
    return 0;
}*/

/*1159
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
}*/

/*1190
#include <stdio.h>
#define N 100
int main()
{
    char str[N];
    gets(str);
    int i, flag = 1; 
    if (!('a' <= str[0] && str[0] <= 'z') && !('A' <= str[0] && str[0] <= 'Z') && str[0] != '_') 
    flag = 0;
    for (i = 1; str[i] != '\0'; i++)
    {
        if (!('a' <= str[i] && str[i] <= 'z') && !('A' <= str[i] && str[i] <= 'Z') && 
            !('0' <= str[i] && str[i] <= '9') && str[i] != '_') {
            flag = 0;
            break; 
        }
    }
    if (flag == 0) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    return 0;
}*/

/*1201
#include <stdio.h>
#include <string.h>
#define N 100
int main() {
    char strings[5][N];
    char shortest[N];
    int i;
    for (i = 0; i < 5; i++) {
        gets(strings[i]);
    }
    strcpy(shortest, strings[0]);
    for (i = 1; i < 5; i++) {
        if (strlen(strings[i]) < strlen(shortest)) 
        strcpy(shortest, strings[i]);
        
    }
    printf("%s\n", shortest);
    return 0;
}*/

/*2628
#include<stdio.h>
char trans(char n)
{
	char t;
	if('A'<=n&&n<='Z')
	t=n+32;
	else t=n;
    return t;
}*/

/*2629
#include<stdio.h>
int fact(int n)
{
	int sum;
	if(n==0||n==1) sum=1;
	else sum=n*fact(n-1);
	return sum;
}*/

/*1199
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
}*/

#include<stdio.h>
#define N 1000
int main()
{
	char str[N];
	gets(str);
	int i,num=0;
	for(i=0;str[i]!='\0';i++)
	{
		if('0'<=str[i]&&str[i]<='9')
		{num++;
		for(;'0'<=str[i]&&str[i]<='9';)
		i++;
		}
	}
	printf("%d\n",num);
	return 0;
}
























