#define _CRT_SECURE_NO_WARNINGS
// ����һ���������
struct book
{
	char name[30];
	double price;
	char id[30];

};

int main()
{
	//����һ����
	struct book b1 = { "��ӹ��", 28.88, "ISBN-100006465" };
	struct book*ps = &b1;//�����ṹ��ָ��
	printf("����:%s\n", (*ps).name);
	printf("����:%s\n", ps->name);
	/*printf("������%s\n", b1.name);
	printf("���ۣ�%lf\n", b1.price);
	printf("��ţ�%s\n", b1.id);*/

	return 0;
}