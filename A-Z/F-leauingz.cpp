#include<iostream>
using namespace std;
int main(){
    int n,t_local,t_luogu;
    cin >> n;
    t_local=n*5,t_luogu=3*n+11;
    if(t_local<t_luogu){
        cout << "Local";
    }
    else{
        cout << "Luogu";
    }
    return 0;
}