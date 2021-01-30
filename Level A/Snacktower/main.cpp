#include <bits/stdc++.h>
using namespace std ;


#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS
    int n , number;
    cin >> n ;
    int biggest = n ;
    int a[n+1] = {0} ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> number ;
        a[number] = 1 ;
        while(a[biggest] && biggest != 0)
        {
            cout << biggest << " " ;
            biggest -- ;
        }
        cout << endl ;
    }

}
