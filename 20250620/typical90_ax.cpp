#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N, L;
    cin >> N >> L;

    vector<int> dp(N + 1, 0);

    auto mod = 10 ^ 9 + 7;

    rep(i, L)
    {
        dp.at(i) = 1;
    }

    for (int i = L; i <= N; i++)
    {
        if (i - 1 >= 0)
        {
            dp.at(i) += dp.at(i - 1);
        }

        if (i - L >= 0)
        {
            dp.at(i) += dp.at(L - 1);
        }

        dp.at(i) %= mod;
    }

    cout << dp.at(N) << endl;

    return 0;
}
