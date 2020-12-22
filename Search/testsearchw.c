#include "searchw.h"

int main()
{
	PNode root = NULL;
	datatype1 nodeArray[11] = {66, 17, 28, 13, 7, 15, 20, 2, 4, 21, 9};
	printf("二叉查找待查找数据为: \n");
	for (int i=0; i<11; i++)
		printf("%d ", nodeArray[i]);
	create(&root, nodeArray, 11);
	printf("\n请输入要查找的元素的值: ");

	datatype locate1;
	scanf("%d", &locate1);
	if (search(root,locate1) != NULL)
		printf("这些数中有你要查找的数:%d\n", search(root,locate1)->key);
		else
		printf("这些数中没有i你要查找的数\n");

	HashTable HashTable;
	InitHashTable(HashTable);
	int b[10] = { 4, 5, 6, 24, 8, 14, 10, 23, 9, 15};
	for (int i=0; i<10; ++i)
	{
		InsertHashTable(HashTable, b[i]);
	}
	printf("哈希查找待查找数据为:\n");
	for (int i=0; i<10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n请输入要查找的元素的值：");

	datatype locate;
	scanf("%d", &locate);
	int addr;
	if (!SearchHashTable(HashTable, locate, &addr))
		printf("这些数中没有你要查找的数\n");
	else
		printf("这些数中有你要查找的数，元素索引位置为:%d\n", addr);


	int a[N];
	srand(time(0));

	for (int i=0; i<N; i++)
	       a[i] = rand() % 100;

	SelectSort(a, N);
	printf("排序后的数据为: ");
	for (int i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("请输入要查找的元素的值，查找结束按Ctrl+z。\n");

	int x;
	while(~scanf("%d", &x)){
		int t = BinarySearch(a, N, x);
		if(t == -1)
			printf("没有你要找的数据！\n");
		else
			printf("你要找的数据在%d的位置\n", t+1);
	}
}
