#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string>var(n),input(m),value(n);
    for(int i=0;i<n;i++){
        cin >> var[i] >> value[i];
        var[i]="{"+var[i]+"}";
    }
    cin.ignore();
    for(int i=0;i<m;i++){
        getline(cin,input[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int pos=0;
            while(input[i].find(var[j],pos)!=string::npos){
                int temp=input[i].find(var[j],pos);
                pos=input[i].find(var[j],pos)+value[j].size();
                input[i].replace(temp,var[j].size(),value[j]);
            }
        }
        cout << input[i] << endl;
    }
    return 0;
}