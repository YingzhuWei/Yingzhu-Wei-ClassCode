#ifndef huffmantreew_h
#define huffmantreew_h
#include <cstdio>
#include <cstring>
using namespace std;

typedef struct {
    int weight;         // 结点权值?
    int parent, lc, rc; // 双亲结点和左 右子节点
} HTNode, *HuffmanTree;

void CreatHuff(HuffmanTree &HT, int *w, int n);

#endif

