#include <iostream> 
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string word,a;
    getline(cin,word);
    getline(cin,a);
    for(int i = 0;i<word.length();i++){
        if(word[i]>='A'&&word[i]<='Z') word[i] = word[i]-'A'+'a';
    }
    for(int i = 0;i<a.length();i++){
        if(a[i]>='A'&&a[i]<='Z') a[i] = a[i]-'A'+'a';
    }
    a = ' '+a+'a';
    word = ' '+word+' ';
    if((int)a.find(word)==-1){
        cout<<-1<<endl;
    }else{
        int firstpos = a.find(word,0);
        int nextpos = firstpos,cnt = 0;
        while(nextpos!=-1){
            cnt++;
            nextpos = a.find(word,nextpos+1);
           
        }
        cout<<cnt<<' '<<firstpos<<endl;
    }
    return 0;
}
