#include <iostream>
using namespace std;
int value[1000],winner[1000],n;
void dfs(int x){
	if(x>=(1<<n)) return;
	dfs(2*x);dfs(2*x+1);
	int lvalue = value[2*x],rvalue = value[2*x+1];
	if(lvalue>rvalue){
		value[x] = lvalue;
		winner[x] = winner[2*x];
	}else{
		value[x] = rvalue;
		winner[x] = winner[2*x+1];
	}
}
int main(){
	cin>>n;
	for(int i = 0;i<1<<n;i++){
		cin>>value[i+(1<<n)];
		winner[i+(1<<n)] = i+1;
	}
	dfs(1); 
	cout<<(value[2] > value[3]?winner[3]:winner[2]);
	return  0;
}
