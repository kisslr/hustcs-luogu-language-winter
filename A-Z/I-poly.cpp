#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) primes.push_back(i);
        for (int p : primes) {
            if (i * p > n) break;
            is_prime[i * p] = false;
            if (i % p == 0) break;
        }
    }
    if(n==1){
        cout << 0;
        return 0;
    }
    for(int i=0;;i++){
        int left=primes[i];
        sum+=left;
        if(sum>n){
            cout << i;
            break;
        }
        else{
            cout << primes[i] << endl;
            if(sum==n){
                cout << i+1;
                break;
            }
        }
    }
    return 0;
}