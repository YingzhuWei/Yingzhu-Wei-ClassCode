#include "binarytreew.h"
//创建二叉树
//以先序序列输入各节点的数据。某节点的左子树或右子树为空时，输入一个特定的值X
void CreateTree(TreeNode *&t, dataType x){
	dataType d;
	scanf("%c", &d);
	if (d==x){
		t=NULL;
}else{
	t=(TreeNode*)malloc(sizeof(TreeNode));
	t->data = d;
	CreateTree(t->left,x);
	CreateTree(t->right,x);
}
//	printf("请按先序序列输入各节点的字符，某节点的左子树或右子树为空时输入一个字符#。 \n");
//	printf("如输入ABD#G###CE##F##\n");
}

//二叉树的先序遍历
void PreOrder(TreeNode *t){
	if (t) {
		printf("%c",t->data);
		PreOrder(t->left);
		PreOrder(t->right);
	}
}

//二叉树的中序遍历
void InOrder(TreeNode *t){
	if (t){
		InOrder(t->left);
		printf("%c",t->data);
		InOrder(t->right);
	}
}

//二叉树的后序遍历
void PostOrder(TreeNode *t){
	if (t){
		PostOrder(t->left);
		PostOrder(t->right);
		printf("%c",t->data);
	}
}

//二叉树的层序遍历
void LevelOrder(TreeNode *t){
	TreeNode *q[MaxSize];
	int front=0, rear=0;
	TreeNode *p;
	if (t == NULL) return;
	q[rear] = t;
	rear = (rear+1) % MaxSize;
	while (front != rear) {
		p = q[front];
		front = (front+1) % MaxSize;
		printf("%c",p->data);
		if (p->left){
			q[rear] = p->left;
			rear = (rear+1) % MaxSize;
		}
		if(p->right){
			q[rear] = p->right;
			rear = (rear+1) % MaxSize;
		}
	}
}
