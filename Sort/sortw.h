#ifndef sortw_h
#define sortw_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

//冒泡排序，从前往后
void Bubble(int a[],int n); 
//直接插入排序
void Insert(int a[],int n);
//直接选择排序
void Select(int a[],int n);
//将a数组分为两个区 
int partition(int a[],int low,int high);
//将a数组的区间[low..high]的元素进行快速排序
void QSort(int a[],int low,int high);
//快速排序
void QuickSort(int a[],int n);

#endif
