#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 10e7;
struct node{
	int left,right;
}tree[maxn];
int dfs(int x){
	if(!x)return 0;
	return max(dfs(tree[x].left),dfs(tree[x].right))+1;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>tree[i].left>>tree[i].right;
	cout<<dfs(1);
	return 0;
}
