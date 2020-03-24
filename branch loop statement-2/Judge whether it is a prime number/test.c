#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		//判断i是否为素数
//		//产生2到i-1之间的数字，那产生的数字去试除i
//		//如果被整除，说明i不是素数，如果2到i-1之间的数字没有一个能整除i，那就说明i是素数
//		int j = 2;
//		while (j < i)
//		{
//			//拿j试除i
//			if ( i%j == 0 )
//			{
//				break;
//			}
//			j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF - end of file -文件结束标志 -放在文件末尾
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:>");
//	scanf("%s", input);
//	printf("请确认密码(Y/N):>");
//	//清空缓冲区
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue
//			;
//		printf("%d ", i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		//计算n的阶乘
//		ret = 1;//归1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}