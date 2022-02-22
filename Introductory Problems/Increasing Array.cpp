#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    long long n;
    long long ans=0;
    cin >> n;
    long long a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        {
            ans += abs(a[i]-a[i+1]);
            a[i+1]=a[i];

        }
    }
    cout << ans <<endl;
    return 0;
}

/* time complexity is o(n) + o(n) */
