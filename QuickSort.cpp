#include<iostream>
#define MAX 100 
using namespace std;
int findpivot(int a[],int low,int up)
{
	int i,j,z;
	z=a[low];
	i=low+1;
	j=up;
	while(i<=j)
	{
		while((z>a[i])&&(i<up))
		i++;
		while(a[j]>z)
		j--;
		if(i<j)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
		else
		i++;
	}
	a[low]=a[j];
	a[j]=z;
	return j;
}
void quick_sort(int a[],int low,int up)
{
	int pivloc;
		if(low>=up)
			return;
			pivloc=findpivot(a,low,up);
			quick_sort(a,0,pivloc-1);
			quick_sort(a,pivloc+1,up);
}
int main()
{
	int a[MAX],num,i;
	cout<<"Enter number of elements:\n";
	cin>>num;
	cout<<"Enter the elements:\n";
	for(i=0;i<num;i++)
	cin>>a[i];
	cout<<"Numbers are:\n";
	for(i=0;i<num;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	quick_sort(a,0,num-1);
	cout<<"Sorted array is:\n";
	for(i=0;i<num;i++)
	cout<<a[i]<<" ";
	return 0;
}
