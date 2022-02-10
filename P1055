#include <iostream>
#include <string>
using namespace std;
int main(){
    string ISBN;
    int num;
    cin>>ISBN;
    int result = 0;
    for(int i = 0,j = 1;i<=12;i++){
    	if(ISBN[i]!='-'&&j!=10){
    		num = ISBN[i]-'0';
    		result += num*j;
    		j++;
		}

    }
    result %= 11;
    
    if(result == 10){
    	if(ISBN[ISBN.size()-1] == 'X') cout<<"Right";
    	else{
    		ISBN[ISBN.size()-1] = 'X';
    		cout<<ISBN;
		}
	}
	
	else {
		if(ISBN[ISBN.size()-1] == result + '0') cout<<"Right";
		else{
			ISBN[ISBN.size()-1] = result + '0';
			cout<<ISBN;
		}
	}
    return 0;
}
