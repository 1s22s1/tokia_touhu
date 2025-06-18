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

    int N, M;
    cin >> N >> M;

    set<int> s;
    rep(i, M)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    vector<int> dp(N + 1, 0);
    dp.at(0) = 1;

    if (s.find(1) == s.end())
    {
        dp.at(1) = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        if (s.find(i - 1) == s.end())
        {
            dp.at(i) += dp.at(i - 1);
        }

        if (s.find(i - 2) == s.end())
        {
            dp.at(i) += dp.at(i - 2);
        }

        dp.at(i) %= 1000000007;
    }

    cout << dp.at(N) << endl;

    return 0;
}
