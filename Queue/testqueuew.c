#include "queuew.h"

int main(){
	Deque *dq;
	dq= createDeque();
	push_back(dq, 30);
	push_front(dq, 40);
	push_back(dq, 50);
	push_front(dq, 60);
	pop_back(dq);
	print(dq);
        printf("队列的元素个数为：%d\n", size(dq));
        printf("队头的元素为：%d\n", front(dq));
        printf("对尾的元素为: %d\n", back(dq));
}
