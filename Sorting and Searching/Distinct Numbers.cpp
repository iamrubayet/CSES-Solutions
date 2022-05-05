#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    ll n;
    cin >> n;
    set<int> s;
    for(int i=0;i<n;i++){
        ll x=0;
        cin >> x;
        s.insert(x);

    }

    cout << s.size()<<endl;
    return 0;
}


