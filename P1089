#include <iostream>
using namespace std;
int main(){
	double money = 0,plan,cun = 0;
	for(int i = 1;i<=12;i++){
		money += 300;
		cin>>plan;
		if(money<plan){
			cout<<-i;
			return 0;
		
		}
			money -= plan;
        if(int(money)/100!=0){ 
            cun += int(money)/100;
            money -= int(money)/100*100;
		}
	}
	money += cun*100*(1.2);
	cout<<money;
	return 0;
}
