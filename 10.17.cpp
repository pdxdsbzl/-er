#include<stdio.h>
int main()
{
	int a=0;
	printf("你玩原神吗\n");
	printf("如果玩就扣1>:");
	scanf("%d",&a);
	if(a==1)
	printf("原来你也...");
	else
	printf("原来你不...");
	return 0;
}