#include<stdio.h>
	int Add(int x,int y)
	{
	int z=x+y;
	return z;
	}
int main()
{
	int a;
	int b;
	int sum;
	printf("ÇëÊäÈëÁ©Êı\n");
	scanf("%d%d",&a,&b);
	sum=Add(a,b);
	printf("sum=%d",sum);
}