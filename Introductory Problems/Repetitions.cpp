#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s;
    int current=1;
    int best=1;
    cin >> s;
    for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                current++;

            }
            else{
                    current = 1;


            }
            best = max(current,best);


    }
    cout << best <<endl;
    return 0;
}

/* 0(n) is the time complexity */
