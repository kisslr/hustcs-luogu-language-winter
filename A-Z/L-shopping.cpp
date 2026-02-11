#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,q,left=1e7+1;
    string ans="-1";
    cin >> n >> q;
    vector<string>goods(n);
    vector<vector<string>>customer(q,vector<string>(2));
    for(int i=0;i<n;i++){
        cin >> goods[i];
    }
    for(int i=0;i<q;i++){
        cin >> customer[i][0] >> customer[i][1];
    }
    for(int i=0;i<q;i++){
        ans="-1",left=1e7+1;
        for(int j=0;j<n;j++){
            if(goods[j].size()>=stoi(customer[i][0])){
                int is=1;
                for(int x=goods[j].size()-1,y=stoi(customer[i][0])-1;y>=0;x--,y--){
                    if(goods[j][x]!=customer[i][1][y]){
                        is=0;
                        break;
                    }
                }
                if(is&&stoi(goods[j])<left){
                    ans=goods[j];
                    left=stoi(goods[j]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}