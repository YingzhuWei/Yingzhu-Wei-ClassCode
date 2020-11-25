#include "sortw.h"

//冒泡排序,从前往后
void BubbleSort(int a[],int n) {
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

void Bubble(int a[], int n){
	int i, num;
	srand(time(0));
	for(i=0; i<N;i++)
		a[i] = rand () %100;
	printf("初始数据为：");

	for(i = 0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	num = N;
	BubbleSort(a, num);
	printf("排序后数据：");
	for(i = 0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	return;
}

//直接插入排序
void InsertSort(int a[],int n){
	int i,j,temp;
	for(i = 1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;	
	}
} 

void Insert(int a[], int n ){
	int i;
	srand(time(0));
	for(i=0; i<N; i++)
		a[i] = rand() % 100;
	printf("初始数据为：");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	printf("\n");
	InsertSort(a, N);
	printf("排序后数据：");
	for(i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return ;
}

//直接选择排序
void SelectSort(int a[],int n){
	int i,j,k,m;
	for(i=0;i<n-1;i++){
		m=a[i];
		k=i;
		for(j=i+1;j<n;j++)
			if(a[j]<m){
				m=a[j];k=j;
			}
		a[k]=a[i];
		a[i]=m;
	}
}

void Select(int a[], int n ){

	int i;
	srand(time(0));
	for(i=0; i<N; i++)
		a[i] = rand() % 100;
	printf("初始数据为：");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	printf("\n");
	SelectSort(a, N);
	printf("排序后数据：");
	for(i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return ;
}

//将a数组分为两个区 
int partition(int a[],int low,int high){
	int x=a[low];
	while(low<high){
		while(low<high && a[high]>=x) high--;
		if(low<high){
			a[low]=a[high];
			low++; 
		}
		while(low<high && a[low]<=x) low++;
		if(low<high){
			a[high]=a[low];
			high--;
		}
	}
	a[low]=x;
	return low;
}              
//将a数组的区间[low..high]的元素进行快速排序
void QSort(int a[],int low,int high){
	if(low<high){
		int mid = partition(a,low,high);
		QSort(a,low,mid-1);
		QSort(a,mid+1,high); 
	}
}                           
//快速排序
void QuickSort(int a[], int n){
	QSort(a,0,n-1);
}                  

//输出
void Quick(int a[], int n ){
	int i;
	srand(time(0));
	for(i=0; i<N; i++)
		a[i] = rand() % 100;
	printf("初始数据为：");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	printf("\n");
	QuickSort(a, N);
	printf("排序后数据：");
	for(i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return ;
}

