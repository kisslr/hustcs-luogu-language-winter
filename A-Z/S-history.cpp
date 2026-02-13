#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t,s1,t1;
    int q,l,r;
    getline(cin,s);
    getline(cin,t);
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> l >> r;
        s1=s.substr(l-1,r-l+1);
        cin >> l >> r;
        t1=t.substr(l-1,r-l+1);
        if((int)(s1.compare(t1))<0){
            cout << "yifusuyi";
        }
        else if((int)(s1.compare(t1))>0){
            cout << "erfusuer";
        }
        else if((int)(s1.compare(t1))==0){
            cout << "ovo";
        }
        if(i<q-1){
            cout << endl;
        }
    }
    return 0;
}