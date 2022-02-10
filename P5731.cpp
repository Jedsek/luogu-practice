#include <iostream>
#include <iomanip>
using namespace std;
int arr[10][10];
int main(){
	int n;
	cin>>n;
	arr[1][1] = 1;
	int hang = 1,lie = 1;
	for(int i = 2;i<=n*n;){
		while(lie<n&&!arr[hang][lie+1]) arr[hang][++lie] = i++;
		while(hang<n&&!arr[hang+1][lie]) arr[++hang][lie] = i++;
		while(lie>1&&!arr[hang][lie-1]) arr[hang][--lie] = i++;
		while(!arr[hang-1][lie])arr[--hang][lie] = i++;
	}
	for(int i = 1;i<=n;i++) 
		for(int j = 1;j<=n;j++){
			cout<<setw(3)<<arr[i][j];
			if(j==n)cout<<endl;
		}
	return 0;
}
