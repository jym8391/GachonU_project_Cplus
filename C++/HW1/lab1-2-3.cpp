#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    int div=10000;
    cin>>num;//5?λ¦? ? ?λ₯? ?? ₯λ°μ divλ‘? ??λ©΄μ κ°? ?λ¦? ?«?λ₯? μΆλ ₯??€.
    for(int i=0;i<5;i++)
    {
        cout<<num/div<<" ";
        num=num%div;
        div=div/10;
    }
    return 0;
}      