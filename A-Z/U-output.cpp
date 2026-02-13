#include<iostream>
#include<string>
using namespace std;
int main(){
    int num,num_binary[16]={0},pos,index=0;
    string bina[16]={"2(0)","2","2(2)","2(2+2(0))","2(2(2))","2(2(2)+2(0))","2(2(2)+2)","2(2(2)+2+2(0))","2(2(2+2(0)))","2(2(2+2(0))+2(0))","2(2(2+2(0))+2)","2(2(2+2(0))+2+2(0))","2(2(2+2(0))+2(2))","2(2(2+2(0))+2(2)+2(0))","2(2(2+2(0))+2(2)+2)","2(2(2+2(0))+2(2)+2+2(0))"};
    string ans;
    cin >> num;
    while(num>0){
        num_binary[index++]=num%2;
        num/=2;
    }
    for(int i=15;i>=0;i--){
        if(num_binary[i]){
            ans=bina[i];
            pos=i;
            break;
        }
    }
    for(int i=pos-1;i>=0;i--){
        if(num_binary[i]){
            ans+="+"+bina[i];
        }
    }
    cout << ans;
    return 0;
}