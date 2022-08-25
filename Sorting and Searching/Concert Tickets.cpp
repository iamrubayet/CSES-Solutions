#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n,m;
    cin >> n >>m;
    vector<int> tickets(n);
    vector<int> customers(m);
    set<pair<int,int>> sortedtickets;
    for(int i=0;i<n;i++)
    {
        cin >> tickets[i];
        sortedtickets.insert({tickets[i],i});
    }
    for(int i=0;i<m;i++)
    {
        cin >> customers[i];
    }
    for(int i=0;i<m;i++)
    {
        auto match = sortedtickets.lower_bound({customers[i]+1,0});
        if(match==sortedtickets.begin())
        {
            cout <<-1<<endl;
        }
       else
       {
           match--;
           cout<<(*match).first <<endl;
           sortedtickets.erase(match);

       }
    }

    return 0;
}
