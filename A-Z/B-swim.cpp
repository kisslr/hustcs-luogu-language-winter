#include<iostream>
using namespace std;
int main()
{
    double sum=0,target,temp=2;
    int ans=0;
    cin >> target;
    do{
        sum+=temp;
        temp*=0.98;
        ans+=1;
    }while(sum<target);
    cout << ans;
    return 0;
}