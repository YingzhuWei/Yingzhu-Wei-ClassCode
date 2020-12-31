#include "graphw.h"

int main(){
	GraphAdjlist G;
	create(&G);
	printf("广度优先遍历：");
	BFS(&G, 0);

	GraphAdjlist G1;
	create(&G1);
	printf("深度优先遍历：");
	DFSTraverse(&G1);
	return 0;
}

