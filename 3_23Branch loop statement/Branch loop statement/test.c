#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int age = 15;
//	if (age < 18)
//	{		
//		printf("δ����\n");
//	    printf("����̸����\n");
//    }
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//����������Ž��к����
//	   if (b == 2)
//		  printf("hehe\n");
//	   else    //else���Ǻ����������δƥ���ifƥ��
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}
//����1-100֮�������
//�ж�ÿ�����Ƿ�Ϊ����
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
//			printf("�������\n");
//		break;
//     }
//	return 0;
//}

//��ӡ0-9
int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			//break;//whileѭ���е�break������ֹѭ��
			continue;//whileѭ���е�continue����������ѭ����ߵĴ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ��������ж�
		printf("%d ", i);
		i++;
	}
	return 0;
}