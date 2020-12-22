#include "searchw.h"

//直接选择排序
void SelectSort(int a[],int n){
        int i,j,k,m;
        for(i=0;i<n-1;i++){
                m=a[i];
                k=i;
                for(j=i+1;j<n;j++)
                        if(a[j]<m){
                                m=a[j];k=j;
                        }
                a[k]=a[i];
                a[i]=m;
        }
}

//折半查找
int BinarySearch(int a[], int n, int x){
	int low = 0, high = n - 1, mid;
	while(low <= high){
		mid  = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		else if(x < a[mid])
			high = mid - 1;
		else
			low = mid +1;
	}
	return -1;
}

//折半查找的递归方法
int BSearch(int a[], int low, int high, int x){
	if(low > high) return -1;                   //查找失败
	int mid = (low + high) / 2;                 //折半
	if (a[mid] == x)
		return mid;                         //找到
	else if(x < a[mid])
		return BSearch(a, low, mid-1, x);
	else 
		return BSearch(a, mid+1, high, x);
}

int BinarySearch2(int a[], int n, int x){
	BSearch(a, 0, n-1, x);
}

//采用插入法创建一颗二叉查找树
void insert(PNode *root, datatype key)
{
	PNode p = (PNode)malloc(sizeof(Node));
	p->key = key;
	p->right = p->left = p->parent = NULL;
	if ((*root) == NULL)
	{
		*root = p;
		return;
	}
	if ((*root)->left == NULL && (*root)->key>key)
	{
		p->parent = (*root);
		(*root)->left = p;
		return;
	}
	if ((*root)->right == NULL && (*root)->key<key)
	{
		p->parent = (*root);
		(*root)->right = p;
		return;
	}
	if ((*root)->key > key)
		insert(&(*root)->left, key);
	else if ((*root)->key < key)
		insert(&(*root)->right, key);
	else
		return;
}

void create(PNode *root, datatype *keyArray, int length)
{
	int i;
	for (i=0; i<length; i++)
		insert(root, keyArray[i]);
}

//查找元素
PNode search(PNode root , datatype key)
{
	if (root == NULL)
		return NULL;
	if (key > root->key)
		return search(root->right, key);
	else  if (key < root->key)
		return search(root->left, key);
	else
		return root;
}

//初始化哈希表
int InitHashTable(HashTable &pHashTable)
{
	pHashTable.count = 0;
	pHashTable.elem = new int [HASHSIZE];
	for (int i=0; i<HASHSIZE; ++i)
		pHashTable.elem[i] = NULLKEY;
	return 1;
}

//哈希函数
int Hash(int key)
{
	return key % HASHSIZE;                          //除留取余法
}

//插入关键字到哈希表
int InsertHashTable(HashTable &pHashTable, int key)
{
	int addr = Hash(key);                           //求哈希地址
	while (pHashTable.elem[addr] != NULLKEY)        //不为空，则冲突了
		addr = (addr+1) % HASHSIZE;             //开放定址法：线性探测
		pHashTable.elem[addr] = key;
		pHashTable.count++;
		return 1;
}

//在哈希表中查找关键字记录
int SearchHashTable(HashTable& pHashTable,int key, int *addr)
{
	*addr = Hash(key);
	while (pHashTable.elem[*addr] != key)
	{
		*addr = (*addr+1) % HASHSIZE;            //开放定址法，线性探测
		if (pHashTable.elem[*addr] == NULLKEY || *addr == Hash(key))
			return 0;
	}
	return 1;
}
