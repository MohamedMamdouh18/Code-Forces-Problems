#include <bits/stdc++.h>
using namespace std ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rep(i , a, b)    for(int i = a; i < b; i++)
 
int main() {
    IOS
    int n , num;
    cin >> n ;
    int big = n ;
    priority_queue <int> a ;
    rep(i , 0 , n)
    {
        cin >> num ;
        a.push(num) ;
        if(a.top() == big)
        {
            while(!a.empty() && a.top() == big)
            {
                cout << a.top() << " " ;
                a.pop() ;
                big -- ;
            }
            cout << endl ;
        }
        else
        {
            cout << endl ;
        }
    }
}
