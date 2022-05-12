#include<iostream>
#define MAX 100
using namespace std;
int binarysearch(int a[],int num,int x)
{
	int low=0,up=num-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(x>a[mid])
			low=mid+1;
		else if(x<a[mid])
			up=mid-1;
			else 
			return mid;	
	}
	return -1;
}
main()
{
	int a[MAX],num,i,x;
	cout<<"Enter the number of elements:\n";
	cin>>num;
	cout<<"Enter the elements in sorted order:\n";
	for(i=0;i<num;i++)
	cin>>a[i];
	cout<<"Entered elements are:\n";
	for(i=0;i<num;i++)
	cout<<a[i]<<" ";
	cout<<endl<<"Enter the item to be searched:\n";
	cin>>x;
	int index=binarysearch(a,num,x);
	
	if(index==-1)
		cout<<"Elements is not in the array\n";
	else
		cout<<"Elment is fount at posision "<<index+1;	
}
