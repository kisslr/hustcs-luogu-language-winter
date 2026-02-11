#include<iostream>
using namespace std;
int nums[30001]={0};
int main(){
    int n,k,num,is=1;
    cin >> n >> k;
    if(n<=0||k<=0){
        cout << "NO RESULT";
    }
    for(int i=0;i<n;i++){
        cin >> num;
        if(!nums[num]){
            nums[num]++;
        }
    }
    num=0;
    for(int i=1;i<30001;i++){
        if(nums[i]){
            num++;
        }
        if(num==k){
            is=0;
            cout << i;
            return 0;
        }
    }
    if(is){
        cout << "NO RESULT";
    }
    return 0;
}