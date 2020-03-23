#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int age = 15;
//	if (age < 18)
//	{		
//		printf("未成年\n");
//	    printf("不能谈恋爱\n");
//    }
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//此条件满足才进行后面的
//	   if (b == 2)
//		  printf("hehe\n");
//	   else    //else总是和离它最近的未匹配的if匹配
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}
//产生1-100之间的奇数
//判断每个数是否为奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//	/*for (i = 1; i < 101; i++)
//	if (i % 2 == 1)
//		printf("%d ", i);
//	return 0;*/
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//			printf("weekday\n");
//			break;
//	case 6:
//	case 7:
//			printf("weekend\n");
//		    break;
//	default:
//			printf("输入错误\n");
//		break;
//     }
//	return 0;
//}

//打印0-9
int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			//break;//while循环中的break用于终止循环
			continue;//while循环中的continue，跳过本次循环后边的代码，直接去判断部分，进行下一次循环的入口判断
		printf("%d ", i);
		i++;
	}
	return 0;
}