#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m,k,temp;
    cin >> n >> m >> k;
    vector<string>yesd(n),endd(m),newd(k);
    vector<int>cnt(m,0);
    temp=n;
    for(int i=0;i<n;i++){
        cin >> yesd[i];
    }
    for(int i=0;i<m;i++){
        cin >> endd[i];
    }
    for(int i=0;i<k;i++){
        cin >> newd[i];
    }
    sort(yesd.begin(),yesd.end());
    sort(endd.begin(),endd.end());
    //on^2的枚举，最后一个会tle,改为二分查找
    // for(int i=0;i<n;i++){
    //     int is=1;
    //     if(temp>m){
    //         for(int j=0;j<m;j++){
    //             if(!cnt[j]&&endd[j]==yesd[i]){
    //                 cnt[j]=1;
    //                 is=0;
    //                 break;
    //             }
    //             else if(endd[j].compare(yesd[i])>0){
    //                 break;
    //             }
    //         }
    //         if(is){
    //             temp--;
    //             newd.push_back(yesd[i]);
    //         }
    //     }
    // }
    //冒泡排序
    // for(int i=0;i<newd.size()-1;i++){
    //     for(int j=0;j<newd.size()-i-1;j++){
    //         if(newd[j].compare(newd[j+1])>0){
    //             swap(newd[j],newd[j+1]);
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        bool is=binary_search(endd.begin(),endd.end(),yesd[i]);
        if(!is){
            newd.push_back(yesd[i]);
        }
    }
    //快排
    sort(newd.begin(),newd.end());
    for(int i=0;i<newd.size();i++){
        cout << newd[i] << endl;
    }
    return 0;
}