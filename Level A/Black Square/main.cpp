#include <bits/stdc++.h>
using namespace std ;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rep(i , a, b)    for(int i = a; i < b; i++)
 
int main() {
    IOS
    int f , s , t, fo , sum = 0;
    cin >> f >> s >> t >> fo ;
    string st ;
    cin >> st ;
    rep(i , 0 , st.size())
    {
        if(st[i] == '1') sum += f ;
        if(st[i] == '2') sum += s ;
        if(st[i] == '3') sum += t ;
        if(st[i] == '4') sum += fo ;
    }
 
    cout << sum ;
}
