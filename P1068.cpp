#include <iostream>
#include <algorithm>
using namespace std;
struct Stud{
    int num;
    int score;
}stud[5050];
bool cmp(Stud a,Stud b){
    if(a.score>b.score) return true;
    if(a.score==b.score&&a.num<b.num) return true;
    return false;
}
int main(){
    int n,m,lqscore,cnt = 0;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>stud[i].num>>stud[i].score;
    }
    sort(stud,stud+n,cmp);
    lqscore = stud[ int((m-1)*1.5)].score;
    for(int i = 0;i<n;i++){
        if(stud[i].score>=lqscore) cnt++;
    }
    cout<<lqscore<<' '<<cnt<<endl;
    for(int i = 0;i<cnt;i++)
        cout<<stud[i].num<<' '<<stud[i].score<<endl;
    return 0;
}
