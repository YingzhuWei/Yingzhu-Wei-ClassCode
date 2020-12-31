#ifndef graphw_h
#define graphw_h
#include<stdio.h>
#include<stdlib.h>
#define max 20

typedef struct EdgeNode{//边表结点   
        int adjvex;//存储顶点对应的下标   存储的是一个位置，而非具体元素，为了以后改变数据方便操作 
        struct EdgeNode *next;//链域指向下一个邻接点 
        int weight;      //权值（问题中有权值再用） 
}EdgeNode;
typedef struct VertexNode{//顶点表结点 
        char data;//存放顶点信息 
        EdgeNode *firstedge;//指向边表中第一个结点 
}VertexNode;
typedef struct{
        VertexNode adjlist[max];
        int n,e;
}GraphAdjlist;//声明图的邻接表类型 
int visited[max];//访问标志数组 （访问过赋值为1，反之为0） 

void create(GraphAdjlist *G);//创建邻接表
void BFS(GraphAdjlist *G,int v);//广度优先搜索
void DFS(GraphAdjlist *G,int i);//深度优先搜索
void DFSTraverse(GraphAdjlist *G);

#endif


