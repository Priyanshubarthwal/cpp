#include<iostream>
#define MAX 11
int a[MAX];
using namespace std;
void heapify(int num,int i)
{
	int left,right,largest=i;
	left=2*i+1;
	right=left+1;
	int temp;
	if(left<num&&a[left]>a[largest])
	{
	largest=left;
	}
	if(right<num&&a[right]>a[largest])
	{
	largest=right;
	}
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(num,largest);
	}
}
void build_heap(int num)
{
	int i,temp;
	for(i=num/2-1;i>=0;i--)
	heapify(num,i);
}
void heap_sort(int num)
{
	build_heap(num);
	for(int i=n-1;i>0;i--) 
	{
		int temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(i,0);
	}
}
main()
{
	int num;
	cout<<"Enter the number of elements\n";
	cin>>num;
	cout<<"Enter the elements\n";
	for(int i=0;i<num;i++)
	cin>>a[i];
	
	cout<<"Entered numbers are:\n";
	for(int i=0;i<num;i++)
	cout<<a[i]<<" ";
	
	heap_sort(num);
cout<<"\nSorted array is:\n";
	for(int i=0;i<num;i++)
	cout<<a[i]<<" ";
}
