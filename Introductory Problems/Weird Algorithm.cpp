#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    long long n;
    cin >> n;
    while(n!=1){
        cout << n <<endl;
        if(n%2==1){
            n = 3*n+1;



        }else{
            n = n/2;
        }

    }
    cout << 1 <<endl;
    return 0;
}

/*The space complexity of this solution is
O(1)
. It is harder to find a time complexity since we don't even know if it always converges to
1
 for any given
N
. All we know (and you can test this) is that up to
10
6
, the largest possible sequence you can get has size
525
. */
