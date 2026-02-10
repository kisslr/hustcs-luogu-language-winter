#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a,b,c,d;
    a=(!(x%2))&&((x>4)&&(x<=12));
    b=(!(x%2))||((x>4)&&(x<=12));
    c=((!(x%2))&&((x<=4)||(x>12)))||(((x%2))&&((x>4)&&(x<=12)));
    d=((x%2))&&(((x<=4)||(x>=12)));
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}