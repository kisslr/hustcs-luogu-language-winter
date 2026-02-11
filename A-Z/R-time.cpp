#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,temp;
    int cnt=0;
    cin >> s;
    if(s.size()==1){
        cout << s;
        return 0;
    }
    int n=s.size();
    vector<string>strs(n*(n-1)/2);
    for(int len=2;len<=s.size();len++){
        for(int i=0;i+len-1<s.size();i++){
            temp=s;
            int start=i,nend=i+len-1;
            for(int j=0;j<=((nend-start)/2);j++){
                swap(temp[start+j],temp[nend-j]);
            }
            strs[cnt++]=temp;
        }
    }
    sort(strs.begin(),strs.end());
    if(strs[0].compare(s)<0){
        cout << strs[0];
    }
    else{
        cout << s;
    }
    return 0;
}