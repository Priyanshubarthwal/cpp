#include<iostream>
#define MAX 100
using namespace std;
int binarysearch(int z[],int num,int items)
{
	int low=0,up=num-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(items>z[mid])
			low=mid+1;
		else if(items<z[mid])
			up=mid-1;
			else 
			return mid;	
	}
	return -1;
}
main()
{
	int z[MAX],num,i,items;
	cout<<"Enter the number of elements:\n";
	cin>>num;
	cout<<"Enter the elements in sorted order:\n";
	for(i=0;i<num;i++)
	cin>>z[i];
	cout<<"Entered elements are:\n";
	for(i=0;i<num;i++)
	cout<<z[i]<<" ";
	cout<<endl<<"Enter the item to be searched:\n";
	cin>>items;
	int index=binarysearch(z,num,items);
	
	if(index==-1)
		cout<<"Elements is not in the array\n";
	else
		cout<<"Elment is fount at posision "<<index+1;	
}
