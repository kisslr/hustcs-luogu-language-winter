#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,ans=0,cnt=0;
    cin >> m >> n;
    if(!n){
        cout << ans;
        return 0;
    }
    vector<int>notebook(m),article(n);
    for(int i=0;i<n;i++){
        cin >> article[i];
    }
    for(int i=0;i<n;i++){
        int is=0;
        for(int j=0;j<cnt;j++){
            if(notebook[j]==article[i]){
                is=1;
                break;
            }
        }
        if(cnt<m&&!is){
            notebook[cnt++]=article[i];
            ans++;
        }
        else if(cnt==m&&!is){
            for(int j=0;j<m-1;j++){
                notebook[j]=notebook[j+1];
            }
            notebook[m-1]=article[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}