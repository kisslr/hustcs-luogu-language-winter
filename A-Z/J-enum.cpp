#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,x,ans=0;
    string s;
    cin >> n >> x;
    for(int i=1;i<=n;i++){
        s=to_string(i);
        for(int j=0;j<s.size();j++){
            if(s[j]==('0'+x)){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}