#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
    long long n,m,p1,p2,s1,s2,minn=1e18;
    long long left=0,right=0;
    cin >> n;
    vector<long long>c(n),gaps(n);
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    for(int i=0;i<n;i++){
        if(i<m-1){
            left+=c[i]*(m-1-i);
        }
        else if(i>m-1){
            right+=c[i]*(i-m+1);
        }
    }
    if(p1>m){
        right+=s1*(p1-m);
    }
    else if(p1<m){
        left+=s1*(m-p1);
    }
    for(int i=0;i<n;i++){
        if(i<m-1){
            gaps[i]=llabs(left+s2*(m-1-i)-right);
        }
        else if(i>m-1){
            gaps[i]=llabs(left-right-s2*(i-m+1));
        }
        else{
            gaps[i]=llabs(left-right);
        }
    }
    for(int i=0;i<n;i++){    
        minn=min(minn,gaps[i]);
    }
    for(int i=0;i<n;i++){
        if(gaps[i]==minn){
            cout << i+1;
            return 0;
        }
    }
}