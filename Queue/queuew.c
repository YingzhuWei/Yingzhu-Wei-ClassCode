#include "queuew.h" 

//创建双端队列
Deque* createDeque(){
	Deque *head;
	head = (Deque*)malloc(sizeof(Deque));
	head->left = head->right = head;
	return head;
}

//求双端队列的元素个数
int size(Deque* dq){
	Deque *p = dq->right;
	int k = 0;
	while (p != dq){
		k++;
		p = p->right;
	}
	return k;
}

//判断端队列是否为空
int empty(Deque* dq){
	return dq->right == dq;
}

//取队头元素
dataType front(Deque* dq){
	if(empty(dq)) exit(1);
	return dq->right->data;
}

//取队尾元素
dataType back(Deque* dq){
	if(empty(dq)) exit(1);
	return dq->left->data;
}

//在队头插入元素X
void push_front(Deque* dq, dataType x){
	Deque *s = (Deque*)malloc(sizeof(Deque));
	s->data = x;
	s->left = dq;
	s->right = dq->right;
	dq->right->left = s;
	dq->right = s;
}

//在队尾插入元素X
void push_back(Deque* dq, dataType x){
	Deque *s = (Deque*)malloc(sizeof(Deque));
	s->data = x;
	s->left = dq->left;
	s->right = dq;
	dq->left->right = s;
	dq->left = s;
}
//删除队头元素
void pop_front(Deque* dq){
	if(empty(dq)) exit(1);
	Deque *p = dq->right;
	dq->right->left = dq;
	dq->right = p->right;
	free(p);
}

//删除队尾元素
void pop_back(Deque* dq){
	if(empty(dq)) exit(1);
	Deque *p = dq->left;
	dq->left->right = dq;
	dq->left = p->left;
	free(p);
}

//清空双端队列的所有元素
void clear(Deque* dq){
	Deque *p, *q;
	p = dq->right;
	while(p != dq){
		q = p;
		p = p->right;
		free(q);
	}
	dq->left = dq->right;
}

//输出双端队列的所有元素
void printf(Deque* dq){
	Deque *p = dq->right;
	while(p != dq){
		printf("%d ", p->data);
		p = p->right;
	}
	printf("\n");
}

//
void print(Deque *dq){
	Deque *p = p->right;
	while(p != p){
		printf("%d ", p->data);
		p = p->right;
	}
}

