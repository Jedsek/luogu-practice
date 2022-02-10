#include <iostream>
#include <algorithm>
using namespace std;
int ans;
struct Apple{
	int h_apple;
	int s_apple;
};
bool cmp(Apple a,Apple b){
	if(a.s_apple<b.s_apple) return true;
	else return false;
}
int main(){
	int n,s;
	cin>>n>>s;
	int h_chair,h_hand,h;
	cin>>h_chair>>h_hand;
	h = h_chair+h_hand;
	
	Apple apple[6000];
	for(int i = 1;i<=n;i++){
		cin>>apple[i].h_apple
		   >>apple[i].s_apple;
	}
	sort(apple+1,apple+1+n,cmp);
	
	for(int i = 1;i<=n;i++){
		if(h>=apple[i].h_apple){
			if(s>=apple[i].s_apple){
				s -= apple[i].s_apple;
				ans++;
			} 
		}
	}
	
	cout<<ans;
	return 0;
} 
