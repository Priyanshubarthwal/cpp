#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int arr[]={23,45,67,89,34,56,98,76,52};
        int num=9;
	for(int i=0;i<num-1;i++)
	{
		int MinValue=i;
		for(int j=i+1;j<num;j++)
		{
			if(arr[j]<arr[MinValue])
			{
			MinValue=j;
			}	
		}
		if(i!=MinValue)
			swap(arr[MinValue],arr[i]);
	}
	for(auto value:arr)
		cout<<value<<" ";
	return 0;
}
