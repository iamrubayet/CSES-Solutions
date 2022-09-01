#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<ll> coins(n);
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    sort(coins.begin(),coins.end());

    ll ans = 1;

    for(int i=0;i<n;i++)
    {
        if(ans < coins[i])
        {
            break;
        }
        else{
            ans += coins[i];
        }
    }

    cout << ans <<endl;






    return 0;
}

