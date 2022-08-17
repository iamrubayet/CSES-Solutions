#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int cnt = n;
    int i,j;
    i=0,j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]<=x){
            cnt--;
            i++;
            j--;
        }
        else{
            j--;
        }

    }
    cout << cnt <<endl;
    return 0;
}
