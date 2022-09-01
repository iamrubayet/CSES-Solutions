#include <iostream>
#include <vector>
 
int main()
{
    unsigned int n, x, count=1;
    std::cin >> n;
    std::vector<unsigned int> indx_arr(n + 1);
    for (unsigned int i=0; i<n; i++)
    {
        std::cin >> x;
        indx_arr[x] = i;
    }
    indx_arr[0] = 0;
    for (unsigned int i=1; i<n+1; i++)
    {
        if (indx_arr[i] < indx_arr[i-1])
        {
            count++;
        }
    }
    std::cout << count;
}