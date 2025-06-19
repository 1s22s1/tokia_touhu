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

    int N;
    cin >> N;

    vector<int> h(N);
    rep(i, N)
    {
        cin >> h.at(i);
    }

    vector<int> dp(N, INT_MAX);

    dp.at(0) = 0;

    rep(i, N)
    {
        if (i + 1 < N)
        {
            dp.at(i + 1) = min(dp.at(i + 1), dp.at(i) + abs(h.at(i + 1) - h.at(i)));
        }

        if (i + 2 < N)
        {
            dp.at(i + 2) = min(dp.at(i + 2), dp.at(i) + abs(h.at(i + 2) - h.at(i)));
        }
    }

    cout << dp.at(N - 1) << endl;

    return 0;
}
