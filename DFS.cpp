#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> g[N];
bool visit[N];
void DFS(int src)
{
	cout<<src<<" ";
	visit[src]=true;
	for(auto nbr:g[src])
	{
		if(visit[nbr])
		continue;
		DFS(nbr);
	}
}
int main()
{
	int n,m;
	cout<<"Enter number of vertices and edges"<<endl;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
	  int x1,x2;
	  cout<<"Enter edge\n";
	  cin>>x1>>x2;
	  g[x1].push_back(v2);
	  g[x2].push_back(v1);
	}
	DFS(1);
}
