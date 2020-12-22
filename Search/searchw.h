#ifndef searchw_h
#define searchw_h
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HASHSIZE 12
#define NULLKEY 0xffffffff/2
#define N 20

//二叉树查找树结点的描述
#define datatype int
typedef struct Node
{
    datatype key;         //关键字
    struct Node *left;    //左孩子指针
    struct Node *right;   //右孩子指针
    struct Node *parent;  //指向父节点指针
}Node, *PNode;

//哈希
typedef int datatype1;
typedef struct HashTable
{
    int *elem;
    int count;
}HashTable;

//直接选择排序
void SelectSort(int a[], int n);
//折半查找
int BinarySearch(int a[], int n, int x);
//折半查找的递归方法
int BSearch(int a[], int low, int high, int x);

//采用插入法创建一颗二叉查找树
void insert(PNode *root, datatype key);
//
void create(PNode *root, datatype *keyArray, int length);
//查找元素
PNode search(PNode root , datatype key);

//初始化哈希表
int InitHashTable(HashTable &pHashTable);
//哈希函数
int Hash(int key);
//插入关键字到哈希表
int InsertHashTable(HashTable &pHashTable, int key);
//在哈希表中查找关键字记录
int SearchHashTable(HashTable& pHashTable,int key, int *addr);

#endif
