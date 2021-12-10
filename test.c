#include<stdio.h>
#include<widows.h>

int factorial(int i)
{
	int j = 0;
	int ret = 1;
	for(j = 1; j <= i; j++)
	{
		ret *= j; 
	}
	return ret;
}

int main()
{
	int a = 0;
	printf("请输入：i = ");
	scanf("%d", &i);
	a = factorial(i);
	printf("%d\n", a);
	system("pause");
	return;
}