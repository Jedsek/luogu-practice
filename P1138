#include <iostream>
#include <algorithm>
using namespace std;
int arr[10005];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+1+n);
	int count = 0;
	for(int i = 1,w = 0;i<n;i++){
		if(arr[i]!=arr[i+1])
			count++;
		else w++;
		if(count==k){
			cout<<arr[count+w];
			break;
		}
	}
	if(count!=k){
		cout<<"NO RESULT";
	}
	return 0;
}
