#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return (a.second < b.second);
}


int main()
{
    int n;
    cin >> n;
    vector< pair<int,int> > intervals(n);
    for(int i=0;i<n;i++)
    {
        cin >> intervals[i].first >> intervals[i].second;

    }
    sort(intervals.begin(),intervals.end(),cmp);
    int i =0;
    int movies = 0;

    int endtime = -1;

    while(i<n)
    {
        if(intervals[i].first >= endtime){
            movies++;
            endtime = intervals[i].second;
            i++;

        }
        else {
            i++;
        }
    }
    cout << movies <<endl;


    return 0;
}
