#include<iostream>
#include<stdlib.h>

using namespace std;

void Merge(int arr[],int low,int mid,int high)
{//low为第1有序区的第1个元素，i指向第1个元素, mid为第1有序区的最后1个元素
	int i=low,j=mid+1,k=0;  //mid+1为第2有序区第1个元素，j指向第1个元素 
	int *temp=new(nothrow) int[high-low+1]; //temp数组暂存合并的有序序列
	if(!temp)//内存分配失败 
	{
		cout<<"ERROR!";
		return;
	}
	while(i<=mid && j<=high)//顺序选取两个有序区的较小元素，存储到t数组中
	{
		if(arr[i]<=arr[j])//较小的先存入temp中
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=mid)//若比较完之后，第一个有序区仍有剩余，则直接复制到t数组中
		temp[k++]=arr[i++];
	while(j<=high)//同上
		temp[k++]=arr[j++];
	for(i=low,k=0;i<=high;i++,k++)//将排好序的存回arr中low到high这区间 
		arr[i]=temp[k];
	delete []temp;//删除指针，由于指向的是数组，必须用delete [] 
}
void MergeSort(int arr[],int low,int high) 
{//用递归应用二路归并函数实现排序——分治法
	if(low<high)//（是if，不是while！，且不含等号！否则死循环！）
	{
		int mid=(low+high)/2;
		MergeSort(arr,low,mid);
		MergeSort(arr,mid+1,high);
		Merge(arr,low,mid,high);
	}
}
int main()
{
	int x[]={0,5,-2,1,-8,7,6,-3};
	MergeSort(x,0,7);
	for(int i=0;i<8;i++)
		cout<<x[i]<<" ";
	system("pause");
    return 0;
}
