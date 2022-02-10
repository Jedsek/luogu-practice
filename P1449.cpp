#include <iostream>
#include <stack>
using namespace std;
int main(){
    char ch;
    stack<int> s;
    int num = 0;
    while(cin>>ch){
        if(ch=='@')break;
        if('0'<=ch&&ch<='9')
            num = num*10+ch-'0';
        else if(ch=='.'){
            s.push(num);
            num = 0;
        }
        else{
            int x = s.top();s.pop();int y = s.top();s.pop();
            switch(ch){
                case '+':s.push(y+x);break;
                case '-':s.push(y-x);break;
                case '*':s.push(y*x);break;
                case '/':s.push(y/x);break;
            }
        }
    }
    cout<<s.top();
    return 0;
}
