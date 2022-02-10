#include <iostream>
#include <list>
using namespace std;
int main(){
	int n,m,cnt = 0;
	cin>>n>>m;
	list<int> l;
	
	for(int i = 1;i<=n;i++) l.push_back(i);
	list<int>::iterator it = l.begin(),now;
	while(!l.empty()){
		cnt++;
		now = it;
		if(++it==l.end()) it = l.begin();
		if(cnt==m){
			cout<<*now<<" ";
			l.erase(now);
			cnt = 0;
		} 
	}
	return 0;
}
