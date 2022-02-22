#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    long long n;
    long long sum1=0;
    long long sum2=0;
    long long x;
    cin >> n;
    for(int i=1;i<=n;i++){
            sum2 +=i;

    }
    for(int i=0;i<n-1;i++){

        cin >> x;
        sum1 +=x;
    }

    cout << sum2-sum1 <<endl;
    return 0;
}

/* space  complexity 0(1) + 0(1) */


/* time complexity 0(n) + 0(n) */
