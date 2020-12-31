#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2, int *p3)
{
       int t;
       t= *p1;
       *p1 = *p2;
       *p2 = *p3;
       *p3 = t;
}

int main()
{
       int var1, var2, var3;
       int *ptr_var1, *ptr_var2, *ptr_var3;
       scanf("%d%d%d", &var1, &var2, &var3);
       ptr_var1 = &var1;
       ptr_var2 = &var2;
       ptr_var3 = &var3;
       printf("初始值:\n");
       printf("var1 = %d\nvar2 = %d\nvar3 = %d\n", var1, var2, var3);
       printf("\n");
       printf("地址:\n");
       printf("var1 = %p\nvar2 = %p\nvar3 = %p\n", &var1, &var2, &var3);
       printf("\n");
       swap(ptr_var1, ptr_var2, ptr_var3);
       printf("交换后:\n");
       printf("var1 = %d\nvar2 = %d\nvar3 = %d\n", var1, var2, var3);
       return 0;
}
