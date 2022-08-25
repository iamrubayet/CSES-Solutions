#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> events(n);
    for(int i=0;i<n;i++)
    {
        int starttime,endtime;
        cin >> starttime >> endtime;
        events.push_back({starttime,1});
        events.push_back({endtime,-1});

    }
    int actualcustomers = 0;
    int maxcustomers = 0;
    sort(events.begin(),events.end());
    for(int i=0;i<events.size();i++)
    {
        actualcustomers += events[i].second;
        maxcustomers= max(maxcustomers,actualcustomers);

    }
    cout << maxcustomers<<endl;

    return 0;
}
