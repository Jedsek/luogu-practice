#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> que;
	int m,n,vis[1005] = {0},ans = 0;
	cin>>m>>n;
	for(int i = 1,tmp;i<=n;i++){
		cin>>tmp;
		if(vis[tmp])
			continue;
		else{
			
			vis[tmp] = 1;
			if(int(que.size())==m){
				vis[que.front()] = 0;
				que.pop();
			}
			que.push(tmp);
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
