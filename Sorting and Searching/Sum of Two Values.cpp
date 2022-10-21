#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n,x;
    cin >> n >> x;
    map<int,int> positionofvalue;
    for(int i=0;i<n;i++)
    {
        int value;
        cin >> value;
        if(positionofvalue.count(x-value))
        {
            cout << i+1 << " " << positionofvalue[x-value]<<endl;
            return 0;
        }
        positionofvalue[value]=i+1;
    }
    cout <<"IMPOSSIBLE"<<endl;
    return 0;
}

