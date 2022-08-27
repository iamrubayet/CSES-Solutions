#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll mid = n/2;
    ll midvalue = v[mid];
    ll mini = 0;
    for(int i=0;i<n;i++)
    {
            mini  += abs(midvalue-v[i]);

    }
    cout << mini <<endl;
    return 0;
}
