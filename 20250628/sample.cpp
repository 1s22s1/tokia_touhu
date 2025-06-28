#include <iostream>
#include <vector>
#include <algorithm> // upper_bound を使うために必要

int main()
{
    std::vector<long long> A = {1, 3, 5, 7, 9};
    long long height = 6;

    auto it = std::upper_bound(A.begin(), A.end(), height);

    if (it != A.end())
    {
        std::cout << "height より大きい最小値は " << *it << std::endl;
    }
    else
    {
        std::cout << "height より大きい要素は存在しません。" << std::endl;
    }

    return 0;
}
