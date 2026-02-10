#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,minn=11,maxn=-1,sum=0,cnt;
    double ans;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cnt;
        minn=min(minn,cnt);
        maxn=max(maxn,cnt);
        sum+=cnt;
    }
    ans=1.0*(sum-minn-maxn)/(n-2);
    printf("%.2f",ans);
    return 0;
}