#include "huffmantreew.h"

int main()
{
    HuffmanTree HT;

    int *w, n, wei;
    printf("input the number of node\n");
    scanf("%d", &n);
    w = new int[n+1];
    printf("\ninput the %dth node of value\n", n);

    for(int i=1; i<=n; i++){
        scanf("%d", &wei);
        w[i] = wei;
    }
    CreatHuff(HT, w, n);

    return 0;
}
