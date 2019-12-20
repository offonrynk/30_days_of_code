#include <bits/stdc++.h>
#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        int k;
        std::cin >> n >> k;

        int maxVal = 0;
        for(int i = 1; i < n; ++i) {
            for(int j = i+1; j <= n; ++j) {
                    if ( ((i & j) < k) && ((i & j) > maxVal) )
                        maxVal = i & j;
            }
        }
        std::cout << maxVal << std::endl;
    }

    return 0;
}