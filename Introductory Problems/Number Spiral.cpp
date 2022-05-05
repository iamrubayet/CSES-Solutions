#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x = 0;
        ll y =0;
        ll result = 0;
        cin >> y >> x;

        if(x==y){
            result = x*x;
            cout << result -(x-1) <<endl;
        }

        else if(y>x)
        {
            if(y%2==0)
            {
                result = y*y;
                cout << result-(x-1) <<endl;

            }
            else
            {
                result = (y-1)*(y-1);
                cout << result+x<<endl;
            }
        }

        else
        {
            if(x%2==0)
            {
                result = (x-1)*(x-1);
                cout << result+y<<endl;


            }
            else
            {
                result = x*x;
                cout << result-(y-1) <<endl;

            }
        }
    }
    return 0;
}
