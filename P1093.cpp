#include <iostream>
#include <algorithm>
using namespace std;
int nums[2000006];
struct Student{
	int num;
	int y;
	int s;
	int k;
	int zong;
	void init(){
		zong = y+s+k;
	}
};
bool cmp(Student a,Student b){
	if(a.zong>b.zong) return true;
	if(a.zong==b.zong&&a.y>b.y) return true;
	if(a.zong==b.zong&&a.y==b.y&&a.num<b.num) return true;
	return false;
}
int main(){
	int n;
	cin>>n;
	Student S[500];
	for(int i = 1;i<=n;i++){
		cin>>S[i].y>>S[i].s>>S[i].k;
		S[i].num = i;
		S[i].init();
	}
	sort(S+1,S+1+n,cmp);
	for(int i = 1;i<=5;i++){
		cout<<S[i].num<<" "<<S[i].zong<<endl;
	}
	return 0;
}
