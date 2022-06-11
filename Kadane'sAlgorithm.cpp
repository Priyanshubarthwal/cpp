#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int ar[MAX],num;
int MaximumSubSubarray(){
	int MaxSum=0,CrSum=0;
	for(int i=0;i<num;i++){
		CrSum=CrSum+ar[i];
		if(CrSum>MaxSum)
			MaxSum=CrSum;
		if(CrSum<0)
			CrSum=0;		
	}
	return MaxSum;
}
int main(){
	cout<<"Enter number of elements\n";
	cin>>num;
	cout<<"Enter elements\n";
	for(int i=0;i<num;i++){
		cin>>ar[i];
	}	
	cout<<"Array is:"<<endl;
	for(int i=0;i<num;i++)
		cout<<ar[i]<<" ";
	cout<<endl;	
	
	int Max=MaximumSubSubarray();
	cout<<"Maximum Sum is:"<<Max;	
}
