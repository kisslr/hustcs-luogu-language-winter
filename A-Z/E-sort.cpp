#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,sum;
    cin >> a >> b >> c;
    sum=a+b+c;
    cout << min(min(a,b),c) << " " << sum-min(min(a,b),c)-max(max(a,b),c) << " " << max(max(a,b),c);
    return 0;
}