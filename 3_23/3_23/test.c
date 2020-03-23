#define _CRT_SECURE_NO_WARNINGS
// 创建一个书的类型
struct book
{
	char name[30];
	double price;
	char id[30];

};

int main()
{
	//定义一本书
	struct book b1 = { "金庸传", 28.88, "ISBN-100006465" };
	struct book*ps = &b1;//创建结构体指针
	printf("书名:%s\n", (*ps).name);
	printf("书名:%s\n", ps->name);
	/*printf("书名：%s\n", b1.name);
	printf("定价：%lf\n", b1.price);
	printf("书号：%s\n", b1.id);*/

	return 0;
}