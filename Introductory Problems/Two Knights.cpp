#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n;
    cin >> n;
    for(long long k=1;k<=n;k++){
        cout << (k*k * (k*k-1))/2 - 4*(k-1)*(k-2) <<endl;
    }
    return 0;
}

