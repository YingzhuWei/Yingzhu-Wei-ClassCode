#include "sortw.c"

int main(int argc,char *argv[])
{
	int a[N],i;
	printf("冒泡排序：\n");
	Bubble(a, N);
	printf("插入排序：\n");
	Insert(a, N);
	printf("选择排序：\n");
	Select(a, N);
	printf("快速排序：\n");
	Quick(a, N);

	return 0;
}
