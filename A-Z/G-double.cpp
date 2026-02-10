#include<iostream>
using namespace std;
int main(){
    int x,ans=1;
    cin >> x;
    while (x>1)
    {
        x/=2;
        ans++;
    }
    cout << ans;
    return 0;
}