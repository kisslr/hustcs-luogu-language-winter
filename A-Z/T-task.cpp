#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int ans=0;
int taskdeal(const vector<vector<int>> &task,vector<int> &value,int pos){
    if(value[pos]){
        return 0;
    }
    if(!task[pos][0]){
        value[pos]=1;
        return 1;
    }
    for(int i=1;i<=task[pos][0];i++){
        ans+=taskdeal(task,value,task[pos][i]-1);
    }
    value[pos]=1;
    return 1;
}
int main(){
    int n,cnt;
    scanf("%d",&n);
    vector<vector<int>>task(n,vector<int>(1,0));
    vector<int>value(n,0);
    for(int i=0;i<n;i++){
        cin >> task[i][0];
        for(int j=1;j<=task[i][0];j++){
            scanf("%d",&cnt);
            task[i].push_back(cnt);
        }
    }
    if(!task[0][0]){
        printf("1");
        return 0;
    }
    for(int i=1;i<=task[0][0];i++){
        int pos=task[0][i]-1;
        ans+=taskdeal(task,value,pos);
    }
    printf("%d",ans+1);
    return 0;
}