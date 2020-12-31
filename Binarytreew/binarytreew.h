#ifndef binarytreew_h
#define binarytreew_h
#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

typedef char dataType;
struct TreeNode{
	dataType data;
	TreeNode *left, *right;
};

//创建二叉树
//以先序序列输入各节点的数据。某节点的左子树或右子树为空时，输入一个特定的值X
void CreateTree(TreeNode *&t, dataType x);
//二叉树的先序遍历
void PreOrder(TreeNode *t);
//二叉树的中序遍历
void InOrder(TreeNode *t);
//二叉树的后序遍历
void PostOrder(TreeNode *t);
//二叉树的层序遍历
void LevelOrder(TreeNode *t);
#endif

